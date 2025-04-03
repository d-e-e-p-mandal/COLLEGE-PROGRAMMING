// Power of 2
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("the exact power of 2 of %d is %d\n",num,2<<(num-1));
    
return 0;
}