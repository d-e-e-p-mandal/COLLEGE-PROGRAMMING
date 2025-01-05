// find HCF of two number 
#include<stdio.h>
int main(){
    int a , b ,hcf;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    printf("HCF = %d\n",a);
    
return 0;
}
