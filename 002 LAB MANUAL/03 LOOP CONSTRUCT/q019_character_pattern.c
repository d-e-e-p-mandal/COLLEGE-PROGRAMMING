/*
Enter charater in capital letter : G
PATTERN : 
A B C D E F G G F E D C B A 
  A B C D E F F E D C B A 
    A B C D E E D C B A 
      A B C D D C B A 
        A B C C B A 
          A B B A 
            A A 
             A   
*/

#include<stdio.h>
int main(){
    char ch, x='A';
    printf("Enter charater in capital letter : ");
    scanf("%c",&ch);
    
    int n = ch - 64 ,i,j;
    printf("PATTERN : \n");
    
    for(i=0 ; i < n ; i++){
        for(j = 0 ; j< i ; j++)
            printf("  ");
            
        for( j = 0 ; j < 2*(n-i) ; j++ ){
            printf("%c ",x);
            if(j<(n-1-i))
                x++;
            if(j>(n-1-i))
                x--;
        }  
        x='A';
        printf("\n");
    }
    for(j = 0 ; j < 2*n-1 ; j++)
        printf(" ");
    printf("%c",x);
    
return 0; 
}
