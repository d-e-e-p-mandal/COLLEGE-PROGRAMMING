#include<stdio.h>
int main()
{
    int ch, en;
    printf("Enter your choice for 'gold plate = 1','solid gold = 2','silver plate = 3' \n");
    scanf("%d",&ch);
    printf("enter engrave\n");
    scanf("%d",&en);
    
    switch (ch)
    {
    case 1 :
        printf("cost = %f\n",500+(en*70.30));   
        break;
    case 2 :
        printf("cost = %f\n",1000+(en*10.40));   
        break;
    case 3 :
        printf("cost = %f\n",300+(en*5.10));   
        break;   
    default:
        printf("wrong choice\n");
    }
    
return 0;
}