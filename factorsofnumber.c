#include<stdio.h>
int main(){
    int n=8;
    int i;
    for(i=1;i<=n;i++)
    if(n%i==0){
        printf("%d ",i);
    }
}