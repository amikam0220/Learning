// test2_1.c
#include <stdio.h>    // printf 
#include <stdlib.h>   // exit
#include <signal.h>   // signal, #define SIGINT 2
#include <unistd.h>   // sleep

int goOnFlag = 1;   // global variable

void MyCtrlC (int sig) {
   printf( "In function MyCtrlC\n" );
   goOnFlag = 0;
}

int main() {
   signal( SIGINT, MyCtrlC );   

   while (goOnFlag) {
      printf( "Hello!\n" );
      sleep(1);
   }

   printf( "In function main !\n" );
   printf( "Exit from the main program !\n" );
   exit( 0 );
}

