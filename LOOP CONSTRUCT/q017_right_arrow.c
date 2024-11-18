/*RIGHT ARROW STAR PATTERN 

Enter number of terms : 5
Right arrow star pattern : 
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

int main(){
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printf("Right arrow star pattern : \n");
    for(int i=1; i<=2*n-1; i++){
        int star = (i<=n)?n-i+1:i-n+1;
        int space = (i<=n) ? 2*(i-1):2*((2*n-1)-i);
            for(int j=1 ; j<=space ; j++){
                printf(" ");              
            }
            for(int j=1 ; j<=star; j++){
                printf("*");              
            }
            printf("\n");
            
    }
    
return 0;
}
