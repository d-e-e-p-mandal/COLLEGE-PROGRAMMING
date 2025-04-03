/*
print
enter number of terms : 5
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
    printf("enter number of terms : ");
    scanf("%d",&n);
    
    for(int i = 0 ; i<n ; i++){
        for(int j =0 ; j<=i ; j++){
            printf("* ");           
        }
        printf("\n");   
    }
    
return 0;
}
