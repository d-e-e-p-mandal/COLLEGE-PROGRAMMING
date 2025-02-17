/*
PRINT
Enter number : 5
    1
   232
  34543
 4567654
567898765
 4567654
  34543
   232
    1
*/

#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
int main(){
    int a=1, b,i ,j;
    printf("Enter number : ");
    scanf("%d",&b);
    for(i = 0 ; i < b*2-1 ; i++ ){
        int space = (i<b)?b-i-1:i-b+1;
        int number = (i<b)?1+2*i : (3*b)-(i*2)+2;
        a=1;
        a = (i<b)? a+i: 2*b-i-a;
        for(j = 0 ; j < space ; j++)
            printf(" ");
        for(j = 0 ; j < number ; j++){
            printf("%d",a);
            a=(j<number/2)?a+1:a-1;
        }
        printf("\n");
            
    }

    return 0;
}
