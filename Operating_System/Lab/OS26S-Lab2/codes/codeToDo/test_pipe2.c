// test_pipe2.c
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main (int argc, char* argv[]) {
   int fd[2];   // file descriptors in a pipe, fd[0] for read, fd[1] for write
   pid_t p1, p2;
   char outP0[50], outP2[50];
   char inP1[50] = "Message from process p1!";
   char inP2[50] = "Message from process p2!";
   if (pipe(fd) == -1) { // create an anonymous pipe 
      perror( "cannot create the IPC pipe!" );
      return 1;
   }

   while ((p1=fork()) == -1) /*!*/ ;  // fork a process p1
   if (p1 == 0) {    // process p1
      /* TODO 1 */ ;   // Write message to the pipe in p1
      exit(0);
   } else {    // parent process p0 (of p1)
      wait(0);
      while ((p2=fork()) == -1 ) /*!*/ ;  // fork a process p2
      if (p2 == 0) {    // process p2
          /* TODO 2 */;   // Read message from the pipe in p2
         printf( "Message received from p1 in p2:\n[%s]\n", outP2 );
          /* TODO 3 */;   // Write message to the pipe in p2
         exit(0);
      } else {   // // parent process p0 (of p2)
         wait(0);
          /* TODO 4 */;   // Read message from the pipe in p0
         printf( "Message received from p2 in p0:\n[%s]\n", outP0 );
         // exit(0);
      }
   }
}

