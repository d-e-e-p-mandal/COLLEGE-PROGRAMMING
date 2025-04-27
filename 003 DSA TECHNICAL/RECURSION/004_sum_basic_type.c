// Sum of natural number basic type passing two parameter
// parameterised way
#include<stdio.h>
void sumofNM(int n,int sum){
    if(n==1){
        printf("sum is %d\n",sum +1);
        return;
    }
    return sumofNM(n-1,n+sum);
}
int main(){
    int n,sum=0;
    printf("Enter number : ");
    scanf("%d",&n);
    sumofNM(n,sum);
    return 0;
}

/* OUTPUT :
Enter number : 100
sum is 5050  */