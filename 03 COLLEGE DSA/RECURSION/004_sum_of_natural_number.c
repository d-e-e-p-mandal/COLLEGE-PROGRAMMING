// Sum of natural number 
#include<stdio.h>
int sumofNM(int n){
    if(n==1)
        return 1;
    return n+sumofNM(n-1);
}
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("Sum of natural number 1 to %d is %d\n",n,sumofNM(n));
    return 0;
}

/*
OUTPUT
Enter number : 100
Sum of natural number 1 to 100 is 5050
*/