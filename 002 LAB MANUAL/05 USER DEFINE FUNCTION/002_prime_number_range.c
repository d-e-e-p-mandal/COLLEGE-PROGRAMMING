/* Write a program to print the entire prime no between 1 and 300 using user define function */
#include<stdio.h>
int Isprime(int n){
    if(n<2)
        return 0;
    int i;
    for(i=2;i<=n/2;i++)
        if(n%i==0)
            return 0;
    return 1;
}
void RangePrime(int x,int y){
    while(x<=y){
        if(Isprime(x))
            printf("%d\t",x);
        x++;
    }
}
int main(){
    int x,y;
    printf("Enter range to check prime numbet : ");
    scanf("%d%d",&x,&y);
    RangePrime(x,y);
    return 0;
}
/*
OUTPUT :
Enter range to check prime numbet : 0 15
2       3       5       7       11      13 
*/