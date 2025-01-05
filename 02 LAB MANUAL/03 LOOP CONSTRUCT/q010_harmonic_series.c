// Harmonic series and sum
#include<stdio.h>
int main (){
    
    float x,y,a,b,d,n,atm,htm,sum=0;
    
    printf("enter 1st term\n");
    scanf("%f",&x);
    printf("enter 2nd term\n");
    scanf("%f",&y);
    printf("enter number of term \n");
    scanf("%f",&n);
   // sum=x+y;
    a=1/x;
    b=1/y;
    d=b-a;
    sum+=x+y;
    printf("The Harmonic series is \n");
    
    for (int i = 2; i<=n-1; i++)
    {
        atm=a+i*d;
        htm=1/atm;
        sum+=htm;
        printf("%f\n",htm); 
    }
    printf("sum of Harmonic series is %f\n",sum);    
    return 0;
}
