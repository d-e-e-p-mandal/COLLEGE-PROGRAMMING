// prime number between given range
#include <stdio.h>
int main()
{
    int num_1, num_2, prime;
    printf("enter the range of number\n");
    scanf("%d%d", &num_1, &num_2);
    printf("prime number between %d to %d\n",num_1,num_2);
    
    for (int i = num_1; i <= num_2; i++){
        prime = 1;
        if (i < 2)
            prime = 0;
        else
            for (int j = 2; j <= i / 2; j++)
                if (i % j == 0)
                {
                    prime = 0;
                    break;
                }
        if(prime)
            printf("%d\n", i);
    }

    return 0;
}
