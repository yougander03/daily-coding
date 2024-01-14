#include<stdio.h>
int main(){
int i;
int arr[]={10,20,30,60,50};
int size = sizeof(arr)/sizeof(arr[0]);
int largest = arr[0];
// initalizing the value to start//

for(i=1;i<size;i++){
// for loop is for checking the each element which is largest//
if (arr[i]>largest){
    largest=arr[i];
    // this if plays imporantant role because in arr[i] the //
    // current largest element wii be stored and if cuurent element //
    // is greater than it the if executes and the largest element will be updated//
}
}
printf("%d",largest);
return 0;
}

