// Number guessing game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int x,y;
    srand(time(0));
    x=(rand()%100);
    //x=rand(time.h);
    printf("%d\n",x);
    printf("Enter number \n");
    do{
        scanf("%d",&y);
        if(y==x)
            printf("your guessing is correct\n");
        else if(y<x)
            printf("enter greater number\n");
        else 
            printf("enter smaller number\n");     
    }while(y!=x);
    
return 0;
}
