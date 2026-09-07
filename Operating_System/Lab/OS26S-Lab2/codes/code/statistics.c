#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* args[]) {
   int counter = 0;
   double sum = .0, entry;
   while (scanf("%lf", &entry) != EOF) {
      sum += entry;
      counter++;
   }   
   printf( "counter=%d\nsum=%.10f\naverage=%12.10f\n", 
      counter, sum, sum / counter
   );
   return 0;
}

