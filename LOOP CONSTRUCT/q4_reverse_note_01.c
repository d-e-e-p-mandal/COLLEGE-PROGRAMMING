// reverse number
#include <stdio.h>
int main()
{
    int num, res, rnum = 0;
    printf("enter number : \n");
    scanf("%d", &num);
    printf("The reverse number is : \n");
    
    while (num){
        res = num % 10;
        printf("%d",num%10);
        num /= 10;
    }

    return 0;
}