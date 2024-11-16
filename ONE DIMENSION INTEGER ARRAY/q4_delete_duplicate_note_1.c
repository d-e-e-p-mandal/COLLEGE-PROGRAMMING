// delete duplicate element in array
#include<stdio.h>  
int main(){
    int a[10],size=10,i,j,k;
    printf("enter no : \n");
    for(i = 0 ; i<10 ; i++){
        scanf("%d",&a[i]);
    }
    for(i = 0 ; i<10 ; i++ ){
        for(j = i +1 ; j<size ; j++){
            if(a[j]==a[i]){
                for(k = j ; k< size ; k++){
                    a[k]=a[k+1];
                }
                size--;
            }
        }
    }
    for(i = 0 ; i<size ; i++){
        printf("%d\t",a[i]);
    }   
return 0;
}