// Input two number find greatest using ternary operator

#include<stdio.h>
int main(){

    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    (a>b)?printf("Greatest number :%d",a):printf("greatest number : %d",b);

    return 0;

}