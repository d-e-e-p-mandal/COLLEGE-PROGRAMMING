/* LEFT ARROW STAR PATTERN

Enter number of terms : 5
Left arrow star pattern : 
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
    printf("Left arrow star pattern :\n");
    
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
