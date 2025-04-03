// Reversee the element of array
#include<stdio.h>
int main(){
    int a[10],s,i,j;
    printf("Enter the element of array : \n");//INPUT
    for(i = 0 ; i<10 ; i++){
        scanf("%d",&a[i]);
    }
    for(i =0 , j =9 ; i<j ; i++,j--){//swap
        s=a[i];
        a[i]=a[j];
        a[j]=s;
    }
    printf("After reverse the element of array : \n");
    for(i = 0 ; i<10 ; i++)//output
        printf("%d\t",a[i]);
        
    return 0;
}
/*
OUTPUT :
Enter the element of array : 
1       2       3       4       5       6       7       8       9       10
After reverse the element of array : 
10      9       8       7       6       5       4       3       2       1 
*/
