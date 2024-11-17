/*
print 
Enter number of terms : 5
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/
#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
int main(){
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    for( int i =0; i<n; i++){
        for(int j=0; j<=i; j++){
            if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0))//if((a+b)%2==0)
                printf("1 ");
            else
                printf("0 ");        
        }
        printf("\n");    
    }   
return 0;
}