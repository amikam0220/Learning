// test2_2a.c
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int goOnFlag, x = 0;

void int12_func (int sig) {
   /* TODO 1 */          // pass parameter to child process
   /* TODO 2 */         // change loop condition variable for child process
}

int main() {
   int p1;
   while ((p1=fork()) == -1) /*!*/ ;
   if (p1 > 0) {   // Parent process
      for (int i = 1 ; i <= 3; i++) {    
         printf( "How are you!\n" );
         sleep(1);
      }
      kill( p1, 12 );      // send signal 12
      wait(0);
      printf( "Parent exited!\n" );
      exit(0);
   } else {   //  Child Process
      signal( 12, int12_func );
      printf( "Child：Parameter before signal 12: %d\n", x );
      goOnFlag = 1;
      while (goOnFlag == 1) {      
         printf( "I'm a child!\n" );
         sleep(1);
      }
      printf( "Child：Parameter before signal 12: %d\n", x );
      printf( "/* TODO 3 */", x*x );
      exit(0);
   }
}

