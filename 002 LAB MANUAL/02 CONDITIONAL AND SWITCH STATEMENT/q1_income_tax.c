// income tax
#include<stdio.h>
int main()
{
    float income , tax;
    printf("Enter income\n");
    scanf("%f",&income);
    if(income>250000)
    {
        tax=25000+((income-250000)*30/100);
    }
    else if (income>150000)
    {
        tax=5000+((income-150000)*20/100);
    }
    else if (income>100000)
    {
        tax=((income-150000)*10/100);
    }
    else
    {
        tax = 0;
    }
    if (tax)
    {
        printf("income tax = %f\n",tax);
    }
    else
    {
        printf("no tax\n");
    }
    
    
return 0;
}