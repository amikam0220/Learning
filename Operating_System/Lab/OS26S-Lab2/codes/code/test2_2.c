// test2_2.c
// in the child process: display "I am child\n" one time every second
// in the parent process: display "How are you!\n" 3 times, 
//                        then send a signal to the child to end its execution
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>

int goOnFlag;
void int12_func (int sig) {
   goOnFlag = 0;
}clear

int main() {
   int p1;
   while ((p1=fork()) == -1) /*!*/ ;
   if (p1 > 0) {   // Parent process
      printf( "Parent Process installs handler for signal 12 !\n" );
      signal( 12, int12_func );   // install signal 12
      for (int i=1; i <= 3; i++) {
         printf( "How are you!\n" );
         sleep(1);
      }
      printf( "Send a signal 12 to the child !\n" );
      kill( p1, 12 );      // Send a signal 12 to p1
      wait(0);
      printf( "Parent exited!\n" );
      exit(0);
   } else {      // Child process
      printf( "Child Process installs handler for signal 12 !\n" );
      signal( 12, int12_func );   // install signal 12
      goOnFlag = 1;
      while (goOnFlag == 1) {
         printf( "I am child\n" );
         sleep(1);
      }
      printf( "Child exited!\n" );
      exit(0);
   }
}

