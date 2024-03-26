#include<stdio.h>
int main(){
    int arr1[]={1,2,5};                            
    int arr2[]={7,9,8};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int merge[n1 + n2];
    int i=0,j=0,k=0;                                 // till here we can consider as 0(1)
    while(i < n1){
        merge[k++]=arr1[i++];
    }
    while(j < n2){
        merge[k++]=arr2[j++];
    }                                               // till here also same we can consider as 0(1)

    for (i=0; i< n1 + n2 ;i++)                      // but here in for loop n1+n2 is there so here 0(n1+n2)
    {
        printf("%d ",merge[i]);          
    }
    return 0;
}
   
// Time complexity = 0(1)+0(1)+0(n1+n2)=  0(n1+n2)
