#include<stdio.h>
#include<stdlib.h>
#define size 10
int arr[size];
int top = -1;

void isEmpty(){
    if(top == -1 )
        printf("\033\n[1;31mStack is Empty\n\n\033[0m");
    else
        printf("Stack is not Empty\n");
   
}

void push(int data){
    if(top == (size - 1))
        printf("\033[1;31Already full.....overflow\n");
    arr[++top] = data;
}

int pop(){
    if(top == -1){
        printf("Underflow......\n");
        exit(0);
    }
    return arr[top--];
}

void display(){
    for(int i=0 ; i<=top; i++)
        printf("\033[7;34m%5d\033[0m",arr[i]);
}
int main(){
    int data,ch;
    while(1){
        printf("\033[1;32m1 for .......push\n\033[0m");
        printf("\033[1;31m2 for .......pop\n\033[0m");
        printf("3 for .......empty \n");
        printf("4 for .......display \n");
        printf("Other for exit\n");
        printf("Enter your choice : ");

        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\033[1;32mEnter Data : \033[0m");
            scanf("%d",&data);
            push(data);
            break;

        case 2:
            printf("\033[1;31m%d deleted\n\033[0m",pop());
            break;
        case 3:
            isEmpty();
            break;
        
        case 4 :
            display();
        default:
            exit(0);
            break;
        }
    }

    return 0;
}