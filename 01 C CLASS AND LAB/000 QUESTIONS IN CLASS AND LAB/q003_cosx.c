// COSX
#include<stdio.h>
#include<math.h>
int main(){
    int i,z=1,f=0,t=1;
    double res=0,x;
    printf("Enter x : ");
    scanf("%lf",&x);
    for (int i = 0; i < 9; i+=2){
        res+=(pow(x,i)*z)/t;
        z*=-1;
        f=t*(f+1)*(f+2);
        t=f;
    }
        printf("cos%.lf is %.2lf\n",x,res);
    
return 0;
}
/*
OUTPUT
Enter x : 0
cos0 is 1.00
*/