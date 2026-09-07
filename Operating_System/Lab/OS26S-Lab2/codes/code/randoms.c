#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char* args[]) {
   int counter = atoi(args[1]);
   srand( time(NULL));
   while (counter--)
      printf( "%12.10f\n", rand() / (RAND_MAX + 1.0) );
   return 0;
}

