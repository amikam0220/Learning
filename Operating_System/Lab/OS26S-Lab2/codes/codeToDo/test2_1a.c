// test2_1a.ccl
#include <stdio.h>    // printf 
#include <stdlib.h>   // exit
#include <signal.h>   // signal, #define SIGINT 2
#include <unistd.h>   // sleep

int exitFlag = 0, count = 0;  // global variables

void int2_func (int sig) {
  
   /* TODO */

}

int main() {
   signal( SIGINT, int2_func );
   while (!exitFlag) {
      printf( "Hello...\n" );
      sleep(1);
   }
   printf( "OK!\n" );
   exit( 0 );
}

