//swapping two number using third veriable

#include<stdio.h>
int main (){
    int a ,b,temp;
    printf("Enter first number :\n ");
    scanf("%d",&a);

    printf("Enter second number :\n ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;

    printf("first number : %d\n",a);
    printf("second number : %d\n",b);

    return 0;

}