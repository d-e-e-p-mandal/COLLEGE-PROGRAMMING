// find odd even number bitwise operator- '&'
// 1111(15)+0001(1)=0001(1)
// 1010(10)+0001(1)=0000(0)
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    if(num & 1)
    {
        printf("odd\n");       
    }
    else
    {
        printf("even\n");
    }
    
return 0;
}