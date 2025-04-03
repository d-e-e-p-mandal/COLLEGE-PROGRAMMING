// calculate simple interest
#include <stdio.h>
int main()
{
    int p, r, t;
    float si;
    printf("enter the amount interest rate and time\n");
    scanf("%d %d %d", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("simple interest = %f", si);
    return 0;
}