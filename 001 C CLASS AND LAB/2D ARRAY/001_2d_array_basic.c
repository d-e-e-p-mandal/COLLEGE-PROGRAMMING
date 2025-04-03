//Input and Output
#include<stdio.h>

int main(){
    int arr[3][3],i,j;  //Input
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element : ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("You entered : \n");   //Output
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");       
    }
    return 0;
}
/*
OUTPUT
Enter element : 1
Enter element : 2
Enter element : 3
Enter element : 4
Enter element : 5
Enter element : 6
Enter element : 7
Enter element : 8
Enter element : 9
You entered : 
1       2       3
4       5       6
7       8       9
*/
