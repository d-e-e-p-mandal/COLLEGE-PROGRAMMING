#include<stdio.h>
int binarySearch(int *arr, int size,int searchElement){
    int left = 0 , right = size -1 ,mid;
    while(left<=right){
        mid = left + (right-left)/2;
        if(arr[mid] == searchElement){
            return mid;
        }
        else if(arr[mid] < searchElement){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int position = binarySearch(arr,10,3);
    if(position == -1)
        printf("Element not found \n");
    else
        printf("Search element at position %d\n",position+1);
    return 0;
}