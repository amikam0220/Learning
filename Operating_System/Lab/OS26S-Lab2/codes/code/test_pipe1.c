// test_pipe1.c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main (int argc, char* argv[]) {
   int fd[2]; // file descriptors in a pipe, fd[0] for read, fd[1] for write
   pid_t pid;
   char outstr[50];
   char instr[50] = "Just a message :-)";
   if (pipe(fd) == -1) {      // create an anonymous pipe
      perror( "cannot create the IPC pipe!" );
      return 1;
   }

   while ((pid=fork()) == -1) /* ! */ ;
   if (pid == 0)  {     // child process
      printf( "message written by the child process:\n[%s]\n", instr );
      write( fd[1], instr, 50 );   // write message to the anonymous pipe
      exit(0);
   } else {     // parent process
      wait(0);
      read( fd[0], outstr, 50 );   // read message from the anonymous pipe
      printf( "message read in the parent process:\n[%s]\n", outstr );
      exit(0);
   }
}

