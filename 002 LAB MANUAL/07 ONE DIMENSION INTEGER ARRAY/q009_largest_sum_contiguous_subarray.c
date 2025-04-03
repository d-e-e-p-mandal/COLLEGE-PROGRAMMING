// Largest sum of contiguous subarray
#include<stdio.h>
int main(){
    int n,i,max,result;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element of array : \n");
    for(i=0 ; i< n ; i++)
        scanf("%d",&a[i]);
    result=max=a[0];
    for(i=1 ; i<n ; i++){
        max=((max+a[i])>a[i])?max+a[i]:a[i];
        result=(result>max)?result:max;
    }
    printf("Largest sum of contiguous subarray is %d \n",result);
    
return 0;
}
/*
Enter the size of array : 8
Enter the element of array : 
-2      -3      4       -1      -2      1       5       -3
Largest sum of contiguous subarray is 7 
*/
