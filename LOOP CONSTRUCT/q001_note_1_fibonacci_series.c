// if we know last no of fibonacci series we can make fiboncci series by 2 variables
// 20 terms fibonacci is 4181
#include <stdio.h>
int main(){
    int a = 0, b = 1;
    printf("fibonacci series 20 terms : \n");
    printf("%d\n", a);
    printf("%d\n", b);
    for (; b < 4181;){
        b = a + b;
        a = b - a;
        printf("%d\n", b);
    }

    return 0;
}
