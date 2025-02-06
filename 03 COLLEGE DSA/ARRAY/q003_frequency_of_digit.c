// write a method to find out frequency of digit of a given number 
#include<stdio.h>
void frequency(int n){
    int i,arr[10]={0,0,0,0,0,0,0,0,0,0};
    while(n){
        arr[n%10]+=1;
        n/=10;
    }
    for(i=0;i<10 ;i++)
        if(arr[i])
            printf("The number of digit %d is %d\n",i,arr[i]);
}
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    frequency(n);

    return 0;
}
/*
OUTPUT
Enter number : 12321
The number of digit 1 is 2
The number of digit 2 is 2
The number of digit 3 is 1
*/