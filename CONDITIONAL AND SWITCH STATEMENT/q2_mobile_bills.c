//mobile bills
#include<stdio.h>
int main()
{
    int no_of_call;
    float rup=0;
    printf("enter no of calls : \n");
    scanf("%d",&no_of_call);
    

    if (no_of_call<=50)
    {
        rup=100;
    }
    else if (no_of_call<=100)
    {
        rup=100+((no_of_call-50)*.80);
    }
    else if (no_of_call<=200)
    {
        rup=100+((50*.8)+((no_of_call-100)*.60));
        
    }
    else
    {
        rup=100+((50*.8)+((50*.6)+((no_of_call-200)*.40)));       
    }
    printf("your bill is = %f\n",rup);
    
    
    
    
return 0;
}