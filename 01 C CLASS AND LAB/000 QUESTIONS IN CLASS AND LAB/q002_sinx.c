// SINX
#include<stdio.h>
#include<math.h>
int main(){
    int i,z=1,f=1;
    double res=0,x;
    printf("Enter x : ");
    scanf("%lf",&x);
    for (int i = 1; i < 9; i+=2){
        res+=(pow(x,i)*z)/f;
        z*=-1;
        f=f*(f+1)*(f+2);
    }
    printf("sin%.lf is %.2lf\n",x,res);
    
return 0;
}
/*
OUTPUT

*/