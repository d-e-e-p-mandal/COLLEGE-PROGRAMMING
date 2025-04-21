// GCD of two number
#include<stdio.h>
int gcd(int a,int b){ // function declare
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main(){
    int a,b,res;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    res =gcd(a,b);  //function call
    printf("GCD of %d & %d is %d\n",a,b,res);
    return 0;
}