// write a method to cheack a number stable or not
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
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    if(stable(n))
        printf("You enter stable number \n");
    else 
        printf("You enter unstable number \n");
    return 0;
}
/*
OUTPUT
Enter number : 112233
You enter stable number 

Enter number : 1223
You enter unstable number
*/