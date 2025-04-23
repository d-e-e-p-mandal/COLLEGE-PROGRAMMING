// Matrix Multiplication
#include<stdio.h>
#include<stdlib.h>
void input(int row, int col, int (*arr)[col]) {
    int i, j;
    for(i=0; i<row; i++ ) {
        for(j=0; j<col; j++) {
            printf("Enter (%d, %d) element : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}

void display(int row, int col, int arr[][col]) {
    int i, j;
    printf("Matrix : \n");
    for(i=0; i<row; i++ ) {
        for(j=0; j<col; j++) {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
}


void matrixMul(int row1,int col1,int arr[][col1], int row2, int col2,int brr[][col2], int res[][col2]) {
    int i,j,k;

    for(i=0; i<row1;i++){
        for(j=0; j<col2;j++){
            res[i][j] = 0;
            for(k=0;k<col1;k++){ // k <row2 , col1 == row2
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
}
int main(){
    int row1,col1,row2,col2;
    printf("1st array number of row : ");
    scanf("%d",&row1);
    printf("1st array number of col : ");
    scanf("%d",&col1);
    printf("2nd array number of row : ");
    scanf("%d",&row2);
    printf("2nd array number of col : ");
    scanf("%d",&col2);

    //arrary
    int arr[row1][col1],brr[row2][col2];
    //input
    printf("Input 1st matrix : \n");
    input(row1,col1,arr);
    printf("Input 2nd matrix : \n");
    input(row1,col1,brr);

    //mul       
    int newRow = row1, newCol = col2;
    int res[row1][col2];
    if(col1 == row2){
        matrixMul(row1,col1,arr,row2,col2,brr,res);
    }else{
        printf("Multiplication is not possible.\n");
    }

    display(row1,col1,arr);
    display(row2,col2,brr);
    
    //ans
    printf("\033[1;32mResult :\n");
    display(row1,col2,res);

    printf("\033[0m\n");
    return 0;
}