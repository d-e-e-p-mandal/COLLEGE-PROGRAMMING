/*
print 
    *****
   ****
  ***
 **
*
 **
  ***
   ****
    *****
*/

#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
int main(){
    int n;
    printf("enter number of terms\n");
    scanf("%d",&n);
    for(int i =1; i<=2*n-1 ; i++){
        int space =(i<=n)?n-i:i-n;
        int star = space+1;
        for(int j=1; j<=space; j++){
            printf(" ");
        }
        for(int j=1; j<=star; j++){
            printf("*");
        }
        printf("\n");
        
    }
return 0;
}