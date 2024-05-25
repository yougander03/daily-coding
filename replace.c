#include<stdio.h>
int main(){
    int arr[]={0,1,0,1};
    int size= sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<size;i++){
    if(arr[i]==0){
        arr[i]=1;
    }
    else
    {
        arr[i]=0;
    }
    }
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }

}