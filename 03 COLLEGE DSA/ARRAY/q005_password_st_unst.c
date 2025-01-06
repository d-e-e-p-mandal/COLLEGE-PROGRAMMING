// write a method to find out password by difference of sum of stable and unstable number 
#include<stdio.h>
void frequency(int *arr,int n){
    while(n){
        arr[n%10]+=1;
        n/=10;
    }
}
int stable(int n){
    int i,item;
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    frequency(arr,n);
    for(i=0 ; i<10;i++){
        if(arr[i]){
            item=arr[i];
            break;
        }
    }
    for(i=0;i<10;i++){
        if(arr[i]!=0 && arr[i]!=item)
            return 0;
    }
    return 1;
}

int main(){
    int n,i,sumST=0,sumUNST=0;
    printf("Enter number of element : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(stable(arr[i]))
            sumST+=arr[i];
         else 
            sumUNST+=arr[i];
    }
    printf("The password is %d\n",sumST-sumUNST);
    return 0;
}

/*
OUTPUT
Enter number of element : 3  
Enter element : 123
Enter element : 10
Enter element : 122
The password is 11
*/