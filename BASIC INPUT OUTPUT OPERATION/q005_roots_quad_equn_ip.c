// determine roots of quadratics equation

#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c, d;
    float r1, r2, p, q;

    printf("Eenter a , b & c\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Quadratic Equation : (%d)x^2+(%d)x+(%d)=0 \n", a, b, c);
    d = sqrt((b * b) - (4 * a * c));
    r1 = (-1 * b - d) / (2 * a);
    r2 = (-1 * b + d) / (2 * a);

    printf("roots are %.2f & %.2f", r1, r2);

    return 0;
}