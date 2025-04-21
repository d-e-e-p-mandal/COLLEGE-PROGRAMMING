// All zero left side and 1 in right side
#include<stdio.h>
void swap(int *x, int *y) {
    *x ^= *y;
    *y ^= *x;
    *x ^= *y;
}
void fun(int *a, int size){
    int i,j;
    for(i=0 , j =size - 1 ; i<j ; ){
        if(a[i]==1 && a[j]==0){
            swap(a+i,a+j);
            i++;j--;
        }
        if(a[i]==0)
            i++;
        if(a[j]==1)
            j--;
    }
}
int main(){
    int a[10],i;
    printf("Enter number 0 or 1 : \n");
    for(i = 0 ; i<10 ; i++)
        scanf("%d",&a[i]);
    fun(a,sizeof(a)/sizeof(int));
    //output
    printf("All 0 left side and 1 in right side\n");

    // printf("0 left side and 1 right side\n");
    for(i = 0 ; i<10 ; i++)
        printf("%d\t",a[i]);
    return 0;
}