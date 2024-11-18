// sliding window maximum
#include<stdio.h>  
int main(){
    int a[10],max,sum =0 ,k=4;
    printf("Enter no : \n");
    for(int i = 0 ; i<10 ; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i<=10-k ; i++ ){
        max = a[i];
        for ( int j = i+1 ; j < i+k ; j++ ){
            if(max<a[j])
                max=a[j]; 
        }
        printf("Maximum of %d,%d,%d,%d is %d\n",a[i],a[i+1],a[i+2],a[i+3],max);
        sum+=max;
    } 
return 0;
}