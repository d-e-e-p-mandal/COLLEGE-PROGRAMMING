// Sliding window maximum and sum : sliding window = 4
#include<stdio.h>  
int main(){
    int a[10],max,sum =0 ,k=4;
    printf("Enter 10 element of arraay : \n");
    for(int i = 0 ; i<10 ; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i<=10-k ; i++ ){
        max = a[i];
        for ( int j = i+1 ; j < i+k ; j++ ){
            if(max<a[j])
                max=a[j]; 
        }
        printf("maximum of index[%d - %d] = %d\n",i ,i+k-1, max);
        sum+=max;
    }
        printf("sum of maximum sliding window %d\n",sum);  
return 0;
}
/*
Enter 10 element of arraay : 
11      3       4       56      5       55      67      87      98      100
maximum of index[0 - 3] = 56
maximum of index[1 - 4] = 56
maximum of index[2 - 5] = 56
maximum of index[3 - 6] = 67
maximum of index[4 - 7] = 87
maximum of index[5 - 8] = 98
maximum of index[6 - 9] = 100
sum of maximum sliding window 520
*/
