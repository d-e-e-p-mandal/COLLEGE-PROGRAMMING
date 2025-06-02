// C Program for HeapSort
#include <stdio.h>

// Heapify function
void heapify(int arr[], int n, int i){
    int temp, maximum, left_index, right_index;
    maximum = i;

    left_index = 2 * i + 1;// left child index
    right_index = 2 * i + 2;// right child index

    // if left index value is grater than the current index
    // value
    if (left_index < n && arr[left_index] > arr[maximum])
        maximum = left_index;

    // if right index value is grater than the current index
    // value
    if (right_index < n && arr[right_index] > arr[maximum])
        maximum = right_index;

    // checking if we needed swaping the elements or not
    if (maximum != i) {
        temp = arr[i];
        arr[i] = arr[maximum];
        arr[maximum] = temp;
        heapify(arr, n, maximum);
    }
}

void heapsort(int arr[], int n)
{
    int i, temp;

    // performing heapify on the non leaf nodes so n/2 - 1
    // to 0 are the non leaf nodes
    for (i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    // the current array is changed to max heap

    for (i = n - 1; i > 0; i--) {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

int main(){
    int n;
    printf("Enter number of element in array : ");
    scanf("%d",&n);
    int arr[n];

    //array input 
    printf("Enter array element : \n");
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }


    // Displaying original array
    printf("Original Array : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    heapsort(arr, n);

    // Displaying sorted array
    printf("Array after performing heap sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}