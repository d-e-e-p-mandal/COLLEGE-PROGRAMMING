// input three number find greatest using ternary operator
#include<stdio.h>
int main()
{
    int num_1,num_2,num_3;
    printf("Enter three number\n");
    scanf("%d%d%d",&num_1,&num_2,&num_3);
    printf("The greatest number is : ");
    (num_1>num_2)?(num_1>num_3)?printf("%d\n",num_1):printf("%d\n",num_3):(num_2>num_3)?printf("%d\n",num_2):printf("%d\n",num_3);
    
              
return 0;
}