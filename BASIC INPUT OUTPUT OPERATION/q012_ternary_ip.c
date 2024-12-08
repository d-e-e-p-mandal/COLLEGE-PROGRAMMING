//arithmetic operator and two nmber from user and operation using ternary operation

#include<stdio.h>
int main()
{
    char opr;
    int num_1,num_2,res;
    printf("Enter two number : ");
    scanf("%d%d",&num_1,&num_2);
    printf("Enter operator '+','-','*','/','%%' : ");
    scanf(" %c",&opr);
    res=(opr=='+')? num_1+num_2 :(opr =='-')?num_1-num_2:(opr=='*')? num_1 *num_2: (opr=='/')?num_1/num_2 :(opr=='%')?num_1% num_2:printf("Input above operator\n")  ;
    printf("Result is %d ", res);
return 0;
}