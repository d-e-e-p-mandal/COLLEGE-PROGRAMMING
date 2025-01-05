// Multiplication table
#include <stdio.h>
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("Multiplication table is : \n");
    for (int i = 1; i <= 10; i++)
        printf("%d*%d=%d\n", num, i, num * i);

    return 0;
}
/*OUTPUT
Enter number : 7
Multiplication table is : 
7*1=7
7*2=14
7*3=21
7*4=28
7*5=35
7*6=42
7*7=49
7*8=56
7*9=63
7*10=70
*/
