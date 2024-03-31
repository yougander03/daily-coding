// Question//
/*Given an array of binary.. convert it into decimal 
arra : 0100
res: 4
arr : 1111
res : 15 */ 
#include <stdio.h>
int main() {
    int binary=101,decimal=0,base=1;        // till here we can take as 0(1)
    while (binary != 0) {                           // here we can should take as 0(n) because while loop runs n times 
        int digit=binary % 10;
        decimal+=digit*base;
        base*=2;
        binary/=10;
    }
    printf("%d",decimal);                         // till here we can take as 0(1)
    return 0;
}

// Time complexity=0(1)+0(n)+0(1)= 0(n)