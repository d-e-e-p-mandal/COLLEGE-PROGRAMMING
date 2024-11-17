// display 5 digit of 5 digit number without loop
#include <stdio.h>
// #include<stdlib.h>
// #include<math.h>
int main()
{
    int num, x;
    printf("enter 5 digit num\n");
    scanf("%d", &num);
   
    x = num / 10000;
    num = num % 10000;
    printf("%d\n", x);

    x = num / 1000;
    num = num % 1000;
    printf("%d\n", x);
    
    x = num / 100;
    num = num % 100;
    printf("%d\n", x);
    
    x = num / 10;
    num = num % 10;
    printf("%d\n", x);
    
    x = num / 1;
    printf("%d\n", x);

    return 0;
}