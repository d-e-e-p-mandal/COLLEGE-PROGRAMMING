/*
print  
Enter number of terms : 10
                  * 
                * * 
              *   * 
            *     * 
          *       * 
        *         * 
      *           * 
    *             * 
  *               * 
* * * * * * * * * *   
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for(int i=n; i>0; i--){
        for(int j=1; j<i; j++){
            printf("  "); //two space           
        }
        for(int j=n; j>=i; j--){
            if(i>=2 && i<=n){
                if(j==n || j==i){
                    printf("* ");
                }
                else
                printf("  ");//two space
            }
            else
            printf("* "); 
        }
        printf("\n");       
    }   
return 0;
}
