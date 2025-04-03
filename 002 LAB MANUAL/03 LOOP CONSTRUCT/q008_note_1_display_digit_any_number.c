//input any number and display digit of number
#include<stdio.h>
//#include<stdlib.h>
#include<math.h>
int main()
{
    int num,x,count=0,res,p;
    printf("enter number\n");
    scanf("%d",&num);
    x=num;
    while (x)
    {
        x/=10;
        count++;
    }
    x=num;
    while (count)
    {
        p=pow(10,(count-1));
        res=x/p;
        x=x%p;
        printf("%d\n",res);
        count--;
    }
    
    
return 0;
}
