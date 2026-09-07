/**
 * test_pipe2.c
 * Parent process creates two child processes
 * Child process 1 sends message to child process 2 through pipe, then exits
 * Child process 2 receives message from child process 1, displays it, then sends message to parent process through pipe, then exits
 * Parent process receives message from child process 2, displays it, then exits
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char* argv[]){
    int p1, p2, fd[2];
    char inp0str[50], outp0str[50];
    char inp1str[50] = "[Message from process p1!]", outp1str[50];
    char inp2str[50] = "[Message from process p2!]", outp2str[50];
    if (pipe(fd) == -1){
        perror("cannot create the IPC pipe!");
        return 1;
    }

    while ((p1=fork()) == -1) /*!*/ ;
    if (p1 == 0){ // process 1
        write(fd[1], inp1str, 50);
        exit(0);
    }else{
        wait(0);
        while ((p2=fork()) == -1) /*!*/ ;
        if (p2 == 0){ // process 2
            read(fd[0], outp2str, 50);
            printf("Message received from p1 in p2:\n%s\n", outp2str);
            write(fd[1], inp2str, 50);
            exit(0);
        }else { // process 0(parent process)
            wait(0);
            read(fd[0], outp0str, 50);
            printf("Message received from p2 in p0:\n%s\n", outp0str);
            exit(0);
        }
    }

}