// reversee the element of array
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
    for(i = 0 ; i<10 ; i++)//output
        printf("%d\t",a[i]);
        
return 0;
}