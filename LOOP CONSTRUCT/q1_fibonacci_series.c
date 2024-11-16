// fibonacci series
#include <stdio.h>
int main()
{
    int num;
    int a = 0, b = 1;
    printf("Enter number  of terms :\n");
    scanf("%d", &num);
    if (num < 1)
    {
        printf("wrong input\n");
    }
    else if (num == 1)
    {
        printf("%d\n", a);
    }
    else if (a == 2)
    {
        printf("%d\n", a);
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", a);
        printf("%d\n", b);
        for (int i = 3; i <= num; i++)
        {
            b = a + b;
            a = b - a;
            printf("%d\n", b);
        }
    }

    return 0;
}