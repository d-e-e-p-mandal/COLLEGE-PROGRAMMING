/* 
Enter number : 3
123
123
123
   123
   123
   123
      123
      123
      123
*/
#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            for(k=0;k<n*i;k++)
                printf(" ");
            for(k=0;k<n;k++){
                printf("%d",k+1);
            }
            printf("\n");
        }
    return 0;
}