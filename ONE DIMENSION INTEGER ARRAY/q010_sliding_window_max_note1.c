// sliding window maximum and sum
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
        printf("max of index[%d - %d] = %d\n",i ,i+k-1, max);
        sum+=max;
    }
        printf("sum of max number %d\n",sum);  
return 0;
}