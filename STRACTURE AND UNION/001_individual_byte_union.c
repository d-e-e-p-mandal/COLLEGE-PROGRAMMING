/* Write a union program to extract individual bytes from an
unsigned int. (for hexadecimal value) */

#include<stdio.h>
union un{
    unsigned int x;
    unsigned char c[4];
};

int main(){
    union un obj;
    int i;
    obj.x=0xFFFFFFFF;
    printf("values in integral is %u and hex is %X \n",obj.x,obj.x);
    for(i=0;i<4;i++){
        printf("%X\n",obj.c[i]);
    }
    return 0;
}
/*
OUTPUT :
values in integral is 4294967295 and hex is FFFFFFFF 
FF
FF
FF
FF

*/