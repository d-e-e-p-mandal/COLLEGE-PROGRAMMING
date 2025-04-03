// find odd even number using bitwise operator- '|'
// 1111(15)+0001(1)=1111(15)
// 1010(10)+0001(1)=1011(11)
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d",&num);
    if((num | 1 )==num)
    {
        printf("odd\n");       
    }
    else
    {
        printf("even\n");
    }
    
return 0;
}
