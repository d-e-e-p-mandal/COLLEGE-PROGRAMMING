/* Write a program to find sum of Fibonacci series up to N (where N is entered through keyboard) using function */
#include<stdio.h>
int fibonacci(int n){
    if(n==1 || n==2)
        return n-1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int sumOfFib(int n){
    int sum=0;
    while(n){
        sum+=fibonacci(n);
        n--;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter n to find sum of Fibonacci series up to N : ");
    scanf("%d",&n);
    printf("Sum is : %d\n",sumOfFib(n));
    return 0;
}
/*
OUTPUT :
Enter n to find sum of Fibonacci series up to N : 10
Sum is : 88
*/