/*
Enter first number : 1
Enter second number : 4

1111111
1222221
1233321
1234321
1233321
1222221
1111111
*/

#include<stdio.h>
int main(){
    int a,b,i,j;
    printf("Enter first number : ");
    scanf("%d",&a); 
    printf("Enter second number : ");
    
    scanf("%d",&b);
    
    int x=a;
    for(i = 0 ; i < b*2-1 ; i++){
        for(j = 0 ; j< b*2 -1 ; j++){
            printf("%d",x);
            x=(i>j)?x+1:x;
            x=(i+j>=b*2-2)?x-1:x;
        }
        x=a;
        printf("\n");   
    }
return 0;
}