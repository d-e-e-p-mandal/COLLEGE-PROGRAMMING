//fibonacci series
#include<stdio.h>
int fibonacci(int n){// function declare
    if(n==0 || n==1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n,i;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d ",fibonacci(i));//function call
    }
    return 0;
}