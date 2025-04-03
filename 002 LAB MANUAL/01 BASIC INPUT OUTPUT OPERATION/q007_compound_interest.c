// calculate compoud interest

#include<stdio.h>
#include<math.h>

int  main (){
    
    float p,r,t,ci;

    printf("Enter amount , interest rate & time \n");
    scanf("%f%f%f",&p,&r,&t);

    ci=(p*pow((1+r/100),t))-p;
   
    printf("compund interst is %f",ci);




    return 0;
}