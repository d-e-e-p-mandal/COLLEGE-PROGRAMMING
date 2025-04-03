/* Given a positive integer n, write a function to find if it is apower of 2 or not */
#include<stdio.h>
int IsPow2(int n){
    return n && !(n &(n-1));
}
int main(){
    int n;
    printf("Enter number to check power of 2 : ");
    scanf("%d",&n);
    if(IsPow2(n))
        printf("%d is power of 2 \n",n);
    else 
        printf("%d is not power of 2 \n",n);
    return 0;
}
/*
OUTPUT :
Enter number to check power of 2 : 0
0 is not power of 2 
Enter number to check power of 2 : 16
16 is power of 2 
Enter number to check power of 2 : 42
42 is not power of 2 
*/