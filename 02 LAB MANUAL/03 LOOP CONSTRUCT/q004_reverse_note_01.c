// Reverse number
#include <stdio.h>
int main()
{
    int num;
    printf("enter number : \n");
    scanf("%d", &num);
    printf("The reverse number is : \n");
    
    while (num){
        printf("%d",num%10);
        num /= 10;
    }

    return 0;
}
