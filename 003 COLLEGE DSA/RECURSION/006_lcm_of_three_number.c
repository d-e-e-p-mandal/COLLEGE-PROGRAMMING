// LCM of three Number 
#include<stdio.h>
int lcm(int a, int b, int c){
    static int i=1;
    if(i%a!=0 || i%b!=0 || i%c!=0){
        i++;
        lcm(a,b,c);
    }
    return i;
}
int main(){
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d%d%d",&a,&b,&c);
    printf("LCM is %d\n",lcm(a,b,c));
    return 0;
}
/*
OUTPUT
Enter three number : 12 15 20
LCM is 60
*/