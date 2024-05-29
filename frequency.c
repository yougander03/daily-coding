#include<stdio.h>
int main(){
  int arr[]= {1,1,1,0,0,7,7,9,9};
  int n=sizeof(arr)/sizeof(arr[0]);
  int count[11]={0};
  int i;
  for (i=0;i<n;i++){
    count[arr[i]]++;
  }
  for(i=0;i<11;i++) 
     {
       printf("%d %d\n", i, count[i]);  
  }
  
}
