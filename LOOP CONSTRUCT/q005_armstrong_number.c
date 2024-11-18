// Armstrong number
#include<stdio.h>
#include<math.h>
int main(){
    int num,x,count=0,r=0;
    
    printf("Enter number : ");
    scanf("%d",&num);
    x=num;
    do{//usind do while for count 0 - as count 1
        x /= 10;
        count++;
    }while(x);
    x=num;
    while(x){
        r+=pow((x%10),count);
        x/=10;  
    }
    if (r==num)
        printf("Yes, it is armstrong number\n");
    else
        printf("It is not armstrong\n");

return 0;
}

/* OUTPUT
Enter number : 0
Yes, it is armstrong number
Enter number : 140
It is not armstrong
*/
