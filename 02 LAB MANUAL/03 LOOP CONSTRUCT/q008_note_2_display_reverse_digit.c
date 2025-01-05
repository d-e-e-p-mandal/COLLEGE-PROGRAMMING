// input any number and ptinnt reverse digit
#include <stdio.h>
int main()
{
    int num, res ;
    printf("Enter number : ");
    scanf("%d", &num);
    while (num){
        res = num % 10;
        printf("%d\n", res);
        num /= 10;
    }
    return 0;
}
