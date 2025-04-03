// Sliding window maximum : sliding window = 4
#include<stdio.h>  
int main(){
    int a[10],max,k=4;
    printf("Enter element of array : \n");
    for(int i = 0 ; i<10 ; i++)
        scanf("%d",&a[i]);
    for(int i = 0 ; i<=10-k ; i++ ){
        max = a[i];
        for ( int j = i+1 ; j < i+k ; j++ ){
            if(max<a[j])
                max=a[j]; 
        }
        printf("Maximum of %d,%d,%d,%d is %d\n",a[i],a[i+1],a[i+2],a[i+3],max);
    } 
return 0;
}
/*
Enter element of array : 
11      2       44      56      6       67      43      45      6       8 
Maximum of 11,2,44,56 is 56
Maximum of 2,44,56,6 is 56
Maximum of 44,56,6,67 is 67
Maximum of 56,6,67,43 is 67
Maximum of 6,67,43,45 is 67
Maximum of 67,43,45,6 is 67
Maximum of 43,45,6,8 is 45
*/
