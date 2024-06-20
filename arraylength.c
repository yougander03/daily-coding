#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4};
    int size= sizeof(arr)/sizeof(arr[0]);
    int length;
    length=size;
    printf("%d",length);
}