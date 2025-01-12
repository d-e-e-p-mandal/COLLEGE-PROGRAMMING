/* Write a program to print out all the Armstrong number between 100 and 500 using user define function. */
#include<stdio.h>
#include<math.h>
int digitCount(int n){
    int count=0;
    do{
        count++;
        n/=10;
    }while(n);
    return count;
}
int IsArmstrong(int n){
    int Nodigit=digitCount(n),x=n,sum=0,rem;
    while(x){
        rem=x%10;
        sum+=pow(rem,Nodigit);
        x/=10;
    }
    if(sum==n)
        return 1;
    return 0;
}
void RangeArm(int x , int y){
    while(x<=y){
        if(IsArmstrong(x))
            printf("%d\n",x);
        x++;
    }
}
int main(){
    int a,b;
    printf("Enter range of number to print armstrong number : ");
    scanf("%d%d",&a,&b);
    RangeArm(a,b);
    return 0;
}
/*
OUTPUT :
Enter range of number to print armstrong number : 100 500
153
370
371
407S
*/