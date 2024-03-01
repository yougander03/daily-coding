#include<stdio.h>
int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mid = n/2;
    if (n==0)
    {
       printf("Invaild");
    }
    else
    {
        printf("%d",arr[mid]);
    }
}