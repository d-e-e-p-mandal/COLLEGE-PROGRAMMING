//find odd and even number using ternary operator

#include<stdio.h>
int main(){
    int n;
    printf("Enter number:\n");
    scanf("%d",&n);
    //printf("You entered %d\n",n);
    (n%2==0)?printf("You entered even number\n"):printf("You entered odd number\n");

return 0;
}