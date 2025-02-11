// ODD/EVEN number bitwise operator- '<< & >>'
#include<stdio.h>
int main()
{
    int num, x , y;
    printf("enter number\n");
    scanf("%d",&num);
    x=num;
    num=num>>1;
    num=num<<1;
    if (num==x)
    {
        printf("even\n");
        
    }
    else
    {
        printf("odd\n");
        
    }
    
    return 0;
}
