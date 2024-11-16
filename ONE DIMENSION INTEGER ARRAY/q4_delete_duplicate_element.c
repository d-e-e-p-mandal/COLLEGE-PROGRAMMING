// delete duplicate element in array
#include<stdio.h>  
int main(){
    int a[10],i,j,k=0,newSize,flag;
    printf("enter no : \n");
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
    newSize=k;
    for( i = 0 ; i<newSize ; i++){
        printf("%d\t",a[i]);
    }   
return 0;
}