#include<stdio.h>
int main()
{
    int arr1[]={100,101};
    int arr2[sizeof(arr1)/sizeof(arr1[0])];
    int i;
    for(i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++){
        int binary= arr1[i];
        int decimal=0,base=1;                                  // till here we can take as 0(1)
        while(binary !=0){                                     // here we can should take as 0(n) because while loop runs n times 
            int digit=binary%10;
            decimal+=digit*base;
            base*=2;
            binary/=10;
        }
        arr2[i]=decimal;
    }
    for(i=0;i<sizeof(arr2)/sizeof(arr2[0]);i++){                  // till here we can take as 0(1)
        printf("%d ",arr2[i]);
    }
}
// Time complexity=0(1)+0(n)+0(1)= 0(n)
