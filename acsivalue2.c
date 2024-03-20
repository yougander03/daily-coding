#include <stdio.h>
int main() {
   char chars[] = {'a', 'b', 'c', 'd', 'e'};
   int i;
   // going each character in the array
   for (i = 0; i < sizeof(chars); i++) {
       printf(" %d", chars[i]);  // convert character to ASCII number
   }
   return 0; 
}
