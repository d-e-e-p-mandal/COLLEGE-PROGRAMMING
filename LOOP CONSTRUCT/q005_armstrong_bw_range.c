// armstrong number user input range
#include <stdio.h>
#include <math.h>
int main()
{
    int num_1, num_2, x, count, r;

    printf("enter range of number\n");
    scanf("%d%d", &num_1, &num_2);
    for(int i = num_1; i <= num_2; i++)
    {
        x = i;
        r=0;
        count=0;
        for (; x;)
        {
            x /= 10;
            count++;
        }
        // printf("%d\n",count);
        x = i;
        while (x)
        {
            r+=pow((x%10),count);
            x /= 10;
        }
            if (r == i)
                printf("%d\n", i);
    }

    return 0;
}
