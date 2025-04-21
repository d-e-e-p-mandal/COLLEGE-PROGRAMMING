// 1st Element not Smaller

#include<stdio.h>
int main(){
    int size,i;
    printf("Enter size of array : \n");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",arr+i);
    }
    if(arr[0]<arr[1])
        printf("false\n");
    else
        printf("true\n");
    return 0;
}