#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>

int main() {
   int pid, status;
   pid = fork();
   if (pid == -1) {
      printf( "fork failed\n" );
      exit(1);
   } else if (pid == 0) {   /* child */
      printf( "CHILD HERE\n" );
      int cont = 0;
      while (cont < 10)
         printf( "%d\n", cont++ );
      printf( "child done!\n" );
   } else {   /* parent */
      wait( &status );
      printf( "\nPARENT HERE\n" );
      printf( "well done kid!\n" );
   }
   return 0;
}

