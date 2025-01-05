// swaping two number using bitwise operator
// 1010 0111
#include<stdio.h>
int main()
{
    int num_1, num_2;
    printf("enter two number\n");
    scanf("%d%d",&num_1,&num_2);
    num_1=num_1^num_2;
    num_2=num_1^num_2;
    num_1=num_1^num_2;
    printf("swaping\n%d\n",num_1);
    printf("%d\n",num_2);
return 0;
}