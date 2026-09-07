#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
   pid_t pid;
   pid = fork();

   if (pid > 0) {
      // Parent process
      printf( "Working in Parent Process: pid=%d\n", pid);
      printf( "PARENT process with pid=%d, CHILD process's pid is %d!\n", getpid(), pid );
   } else if (pid == 0) { 
      // Child process
      printf( "Working in Child Process: pid=%d\n", pid );
      printf( "CHILD process with pid=%d, PARENT process's pid is %d!\n", getpid(), getppid() );
   } else {
      printf( "Something is WRONG!\n" );
   }
   return 0;
}