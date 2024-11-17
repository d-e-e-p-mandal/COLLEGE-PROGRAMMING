//convert fahrenhit to celsius
#include <stdio.h>
int main(){ 
    float f,c;
    printf("Enter temperature in fahrenhit\n");
    scanf("%f", &f);
    c = (f-32)*5/9;
    printf("The teamperature in celsius is:%f\n",c);

    return 0;
}
