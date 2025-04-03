/* GIVEN AN ARRAY INTEGER NUMS AND INTIGER TARGET , OUTPUT ADD OF TWO ELEMENT OF ARRAY IS EQUAL TO TARGET 
THEN PRINT THAT INDEX ( WHICH NUMBER IS ADDED)
*/
#include<stdio.h>
int main(){
    int n,i,j,target,flag=0;
    printf("Enter total number in array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0 ; i<n ; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter target : ");
    scanf("%d",&target);
    for(i=0 ; i< n && flag ==0; i++)
        for(j=i+1 ; j<n  ; j++){
            if(a[i]+a[j]==target){
                flag=1;
                break;
            }
        }
    if(flag)
        printf("Target is equal to adding index %d & %d",i-1,j);
    else
        printf("Target is not equal to add any two index\n");
        
    
return 0;
}
/*
OUTPUT 1 :
Enter total number in array : 4
Enter element 1 : 2
Enter element 2 : 7
Enter element 3 : 11
Enter element 4 : 15
Enter target : 9
Target is equal to adding index 0 & 1

OUTPUT 2 :
Enter total number in array : 3
Enter element 1 : 3
Enter element 2 : 2
Enter element 3 : 4
Enter target : 6
Target is equal to adding index 1 & 2
*/