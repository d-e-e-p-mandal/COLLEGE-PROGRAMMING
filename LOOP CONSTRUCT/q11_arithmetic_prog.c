// sum of arithmetic series
#include <stdio.h>
int main()
{
    int n, i;
    float a, d, sum = 0;
    printf("enter first tem\n");
    scanf("%f", &a);
    printf("enter common difference\n");
    scanf("%f", &d);
    printf("enter no of terms\n");
    scanf("%d", &n);

    sum = n / 2 * (2 * a + ((n - 1) * d));
    for (int i = 0; i < n; i++)
        printf("%.2f\n", a + i * d);

    printf("sum=%f\n", sum);
    return 0;
}