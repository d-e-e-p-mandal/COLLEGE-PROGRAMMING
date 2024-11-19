// Largest sum of contiguous subarray and index 
#include<stdio.h>
int main(){
    int n,i,result,max,x,y;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array : \n");
    for(i=0 ; i< n ; i++)
        scanf("%d",&a[i]);
    result=max=a[0];
    for(i=1 ; i<n ; i++){
        max+=a[i];
        if(a[i]>max){
            max=a[i];
            x=i;
        }
        if(max>result){
            result=max;
            y=i;
        }
    }
    printf("Largest sum of contiguous subarray is %d \n",result);
    printf("Index of sum is %d to %d\n",x,y);
return 0;
}
/*
Enter the size of array : 8
Enter the element of array : 
-2      -3      4       -1      -2      1       5       -3
Largest sum of contiguous subarray is 7 
Index of sum is 2 to 6
*/
