//convert celsius to fahrenhit
#include <stdio.h>
int main(){    
    float c,f;
    printf("Enter temperature in celsius\n");
    scanf("%f", &c);
    f = (9 * c) / 5 + 32;
    printf("The teamperature in fahrenhiet is:%f\n",f);

    return 0;
}