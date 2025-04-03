// Area of rectangle
#include <stdio.h>
int main()
{
    int length,width;
    int area ;
    printf("Enter length & width\n");
    scanf("%d%d", &length,&width);
    area = length * width;
    printf("Area of the rectangle is %d", area);
    return 0;
}