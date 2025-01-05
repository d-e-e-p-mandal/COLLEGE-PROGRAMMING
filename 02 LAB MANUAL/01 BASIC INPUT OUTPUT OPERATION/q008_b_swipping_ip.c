// swaping two number without third veriable

#include<stdio.h>
int main (){

    int a ,b;
    printf("Enter first number : ");
    scanf("%d",&a);

    printf("Enter second number : ");
    scanf("%d",&b);

    a=a-b;
    b=b+a;
    a=b-a;
     printf("first number : %d\n",a);
    printf("second number : %d\n",b);   

    return 0;
}