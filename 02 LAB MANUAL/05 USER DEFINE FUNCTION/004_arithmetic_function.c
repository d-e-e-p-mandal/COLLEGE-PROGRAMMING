/* Write a program to find the value of y for a particular value of n. The a, x,b, n is input by user
if n=1 y=a power x % b
if n=2 y=a xsquare + b2
if n=3 y=a - b power x
if n=4 y=a + x power b */
#include<stdio.h>
#include<math.h>
int fun1(int a,int x, int b){
    int s=pow(a,x);
    return s%b;
}
int fun2(int a,int x, int b){
    return (a*pow(x,2))+ pow(b,2);
}
int fun3(int a,int x, int b){
    return a-pow(b,x);
}
int fun4(int a,int x, int b){
    return a+pow(x,b);
}
int main(){
    int a,x,b,n;
    printf("Enter a,x,b : ");
    scanf("%d%d%d",&a,&x,&b);
    printf("if n=1 then y=a power x %% b : \n");
    printf("if n=2 then y=a xsquare + b2 : \n");
    printf("if n=3 then y=a - b power x : \n");
    printf("if n=4 then y=a + x power b : \n");
    scanf("%d",&n);
    int (*afp[4])(int,int,int)={fun1,fun2,fun3,fun3};//array pointer function
    printf("y=%d\n",afp[n-1](a,x,b));
    return 0;
}
/*
OUTPUT :
Enter a,x,b : 2 1 3
if n=1 then y=a power x % b : 
if n=2 then y=a xsquare + b2 : 
if n=3 then y=a - b power x : 
if n=4 then y=a + x power b : 
1
y=2
*/