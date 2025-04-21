/* Basic question
Enter number : 3
123
456
789
*/
#include<stdio.h>
int main(){
    int n,i,j,x=1;
    printf("Enter number : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",x++);
        }
        printf("\n");
    }
    return 0;
}
