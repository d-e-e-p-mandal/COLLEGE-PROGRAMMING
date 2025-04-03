/*HOLLOW DIAMOND STAR USING FUNCTION

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
#include <stdio.h>
void star_Function(int);
void spaceFunction(int);
int main(){
   int n;
   printf("Enter number of terms : ");
   scanf("%d", &n);
   printf("Holllow Diamond star : \n");
   
   for(int i = 0; i < 2 * n - 1; i++){
      int star = (i < n) ? n - i : i - (n - 2);
      int space = (i < n) ?  i : (2 * n - i - 2);

      star_Function(star);
      spaceFunction(space);
      spaceFunction(space);
      star_Function(star);
      printf("\n");
   }

   return 0;
}
void star_Function(int n){
    for (; n; n--)
         printf("*");
}
void spaceFunction(int n){
    for (; n; n--)
         printf(" ");
}
