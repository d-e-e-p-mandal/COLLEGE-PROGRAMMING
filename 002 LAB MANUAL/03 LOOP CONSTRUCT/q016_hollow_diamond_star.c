/* HOLLOW DIAMOND STAR

Enter number of terms : 10
Holllow Diamond star : 
********************
*********  *********
********    ********
*******      *******
******        ******
*****          *****
****            ****
***              ***
**                **
*                  *
**                **
***              ***
****            ****
*****          *****
******        ******
*******      *******
********    ********
*********  *********
********************
*/
#include<stdio.h>
//#include<stdlib.h>
int main(){
   int n;
   printf("Enter number of terms : ");
   scanf("%d",&n);
   printf("Holllow Diamond star : \n");
   
   for(int i=0; i<2*n-1; i++){
       int star_1 = (i<n)? n-i : i-(n-2);
       int space_1 = (i<n)? i : (2*n-i-2);

      for(int j = 1; j<=star_1; j++){         
         printf("*");
      }
      for( int j=1; j<=space_1; j++){
         printf("  ");
      } 
      for(int j = 1; j<=star_1; j++){         
         printf("*");
      }
      printf("\n");
  }   
return 0;
}
