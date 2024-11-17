/*
PRINT
Enter number of terms : 5
      * 
     * * 
    * * * 
   * * * * 
  * * * * * 
*/

#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
int main(){
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for(int i =0 ; i < n ; i++){
        for(int j = 0 ; j<= n-i; j++){
            printf(" ");           
        }
        for(int j = 0 ; j<=i; j++){
            printf("* ");           
        }
        printf("\n");
        
    }
return 0;
}