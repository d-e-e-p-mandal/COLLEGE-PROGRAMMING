//armstrong number
#include<stdio.h>
#include<math.h>
int main(){
    int num,x,count=0,r=0;
    
    printf("enter number\n");
    scanf("%d",&num);
    x=num;
    for( ;x; ){
        x /= 10;
        count++;
    }
    x=num;
    while (x){
        r+=pow((x%10),count);
        x/=10;  
    }
    if (r==num)
        printf("yes, it is armstrong number\n");
    else
        printf("it is not armstrong\n");
        
    
    
return 0;
}