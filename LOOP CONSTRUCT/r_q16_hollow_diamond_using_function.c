/*
print (n=10)
********************
*********__*********
********____********
*******______*******
******________******
*****__________*****
****____________****
***______________***
**________________**
*__________________*
**________________**
***______________***
****____________****
*****__________*****
******________******
*******______*******
********____********
*********__*********
********************
*/
#include <stdio.h>
// #include<stdlib.h>
// #include<math.h>
void star(int);
void space(int);
int main()
{
   int n;
   printf("enter number of terms \n");
   scanf("%d", &n);

   for (int i = 0; i < 2 * n - 1; i++)
   {
      int star_1 = (i < n) ? n - i : i - (n - 2);
      int space_1 = (i < n) ?  i : (2 * n - i - 2);

      star(star_1);
      space(space_1);
      space(space_1);
      star(star_1);
      printf("\n");
   }

   return 0;
}
void star(int n)
{
    for (; n; n--)
      {
         printf("*");
      }
}
void space(int n){
    for (; n; n--)
      {
         printf("_");
      }
}