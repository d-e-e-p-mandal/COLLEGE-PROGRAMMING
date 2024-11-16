// number of note
#include <stdio.h>
int main(){
    int amount;
    int count_500 = 0;
    int count_200 = 0;
    int count_100 = 0;
    int count_50 = 0;
    int count_20 = 0;
    int count_10 = 0;
    int count_5 = 0;
    int count_2 = 0;
    int count_1 = 0;
    printf("enter amount \n");
    scanf("%d", &amount);

    if (amount >= 500)
    {
        count_500 = amount / 500;
        amount = amount % 500;
        printf("No of note of 500 = %d\n", count_500);
    }
    if (amount >= 200)
    {
        count_200 = amount / 200;
        amount = amount % 200;
        printf("No of note of 200 = %d\n", count_200);
    }
    if (amount >= 100)
    {
        count_100 = amount / 100;
        amount = amount % 100;
        printf("No of note of 100 = %d\n", count_100);
    }
    if (amount >= 50) 
    {
        count_50 = amount / 50;
        amount = amount % 50;
        printf("No of note of 50 = %d\n", count_50);
    }
    if (amount >= 20)
    {
        count_20 = amount / 20;
        amount = amount % 20;
        printf("No of note of 20 = %d\n", count_20);
    }
    if (amount >= 10)
    {
        count_10 = amount / 10;
        amount = amount % 10;
        printf("No of note of 10 = %d\n", count_10);
    }
    if (amount >= 5)
    {
        count_5 = amount / 5;
        amount = amount % 5;
        printf("No of note of 5 = %d\n", count_10);
    }
    if (amount >= 2)
    {
        count_2 = amount / 2;
        amount = amount % 2;
        printf("No of note of 2 = %d\n", count_2);
    }
    else
    {
        count_1 = amount / 1;
        printf("No of note of 1 = %d\n", count_1);
    }
    return 0;
}