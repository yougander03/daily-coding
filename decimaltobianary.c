#include <stdio.h>
int main() {
    int decimal=100,i=0,digit;
    int binary[100];
    while (decimal>0) {
        digit=decimal % 2;  
        binary[i]=digit;   
        decimal/= 2;        
        i++;                
    }
    for (int j=i-1;j>=0;j--) {
        printf("%d ", binary[j]);
    }
    return 0;
}
