// reverse number
#include <stdio.h>
int main()
{
    int num, res, rnum = 0;
    printf("enter number\n");
    scanf("%d", &num);
    while (num){
        res = num % 10;
        rnum=rnum*10+res;
        num /= 10;
    }
    printf("%d\n", rnum);

    return 0;
}
