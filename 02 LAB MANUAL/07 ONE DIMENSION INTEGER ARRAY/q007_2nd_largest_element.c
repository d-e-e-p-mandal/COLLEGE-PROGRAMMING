// find 2nd largest
#include<stdio.h>
int main(){
    int a[10],max,max_2,i;
    printf("Enter element of array\n");
    for(i=0 ; i<10 ; i++)
        scanf("%d",&a[i]);

    max=a[0];
    for(i=1; i<10 ; i++)
        if(a[i]>max){
            max=a[i];
        }
    for(i= 0 ; i<10 ; i++){
        if(max!=a[i]){
            max_2=a[i];
            break;
        }
    }
    for(i= 0 ; i<10 ; i++){
        if(max_2<a[i]&& max!=a[i]){
            max_2=a[i];
        }
    }
    printf("The 2nd max number is %d\n",max_2);
    
    
return 0;
}
