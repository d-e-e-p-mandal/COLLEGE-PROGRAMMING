// perimeter and area of circle
#include <stdio.h>
#define pi 3.14
int main(){
    int radius;   
   // float perimeter;
    printf("Enter radius\n");
    scanf("%d", &radius);
    //perimeter =2* pi * radius ;
    printf("perimeter of the circle %.2f\n",2*pi*radius );
    printf("area of the circle %.2f\n", pi*radius*radius);
    return 0;
}