// Delete duplicate element in array
#include<stdio.h>  
int main(){
    int a[10],i,j,k=0,newSize,flag;
    printf("Enter element of array : \n");
    for(i = 0 ; i<10 ; i++){
        scanf("%d",&a[i]);
    }
    for(i = 0 ; i<10 ; i++ ){
        flag=1; 
        for(j = 0 ; j< i ; j++){
            if(a[j]==a[i]){
                flag = 0 ;
                break;
            }
        }
        if(flag){
            a[k]=a[i];
            k++;
        }
    }
    printf("After delete duplicate element : \n");
    newSize=k;
    for( i = 0 ; i<newSize ; i++){
        printf("%d\t",a[i]);
    }   
return 0;
}
/*
OUTPUT :
Enter element of array : 
1       2       3       4       5       6       7       8       1       2
After delete duplicate element : 
1       2       3       4       5       6       7       8 
*/
