#include<stdio.h>
int main()
{
    int arr1[]={1,2,3,4};
    int size=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[size];
    int i,x=0;
    for(i=size-1;i>=0;i--)
    {
        arr2[x]=arr1[i];
        x++;
    }
    x=0;
    for(i=0;i<size;i++)
    {
        arr1[i]=arr2[x];
        x++;
        printf("%d",arr1[i]);
    }
}