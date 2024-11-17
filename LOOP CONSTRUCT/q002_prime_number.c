// prime number or composite number
#include<stdio.h>
int main()
{
    int num,flag;
    printf("Enter number\n");
    scanf("%d",&num);
    if (num<2){
        printf("Neither prime nor composite\n");  
    }
    else
    for (int i = 2; i <= num/2; i++){
        flag=1;
        if(num%i==0){
            flag=0;
           break;  
        }
    }
    if(flag==1)
        printf("%d is prime number\n",num);
    if(flag==0)
        printf("%d is composite number\n",num);        
    
return 0;
}
