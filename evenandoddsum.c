#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i;
    int even=0;
    int odd=0;
    for(i=0;i<size;i++){
        if(arr[i]%2== 0){
            even+=arr[i];
        }else{
            odd+= arr[i];
        }
    }
    printf("%d\n",even);
    printf("%d",odd);
}
