// Doubly linked list 
#include<stdio.h>
#include<stdlib.h>
typedef struct list{
    int data;
    struct list *prev,*next;
}L;

L *makeNode(){
    L *new1 = (L *)malloc(sizeof(L));
    printf("Enter data : ");
    scanf("%d",&new1->data);
    new1->prev = NULL;
    new1->next = NULL;

    return new1;
}

void display(L *h){
    if (h == NULL)
        printf("Empty List.....\n");
    while(h){
        printf("%d\n", h->data);
        h=h->next;
    }  
}

void displayRev(L *tail){
    if(tail == NULL){
        printf("List is already empty.\n");
    }
    while(tail){
        printf("%d\n",tail->data);
        tail = tail->prev;
    }
}

L* addBegin(L *head, L **tail){
    L *new1 = makeNode();

    if(head == NULL){
        head = new1;
        *tail = new1;
        return head;
    }
    head->prev = new1;
    new1->next = head;
    head = new1;

    return head;
}

L *deleteBegin(L *head, L **tail){
    L *temp = head;
    if(head == NULL){
        printf("List is empty\n");
    }
    if(head == *tail){
        head = NULL;
        *tail = NULL;
        free(temp);
        return head;
    }

    head = head -> next;
    head ->prev = NULL;
    free(temp);

    return head;

}

L *deleteLoc(L *head, L **tail, int loc){
    L *temp = head;
    while(loc >1){
        temp = temp ->next;
        loc--;
    }

    temp ->next ->prev = temp ->prev;
    temp -> prev ->next = temp ->next;
    free(temp);

    return head;
}

int main(){
    
    struct list *head=0,*tail = 0;
    int ch;
    while (1){
        printf("1..........add first\n");
        printf("2..........display\n");
        printf("3..........displayRev\n");
        printf("other for..........exit\n");
        scanf("%d",&ch);
        switch (ch){
        case 1 :
            head =addBegin(head,&tail);
            break;
        case 2 :
            display(head);
            break;
        case 3 :
            displayRev(tail);
            break;
        case 4 : 
            head = deleteBegin(head, &tail);
            break;
        case 5 :
            head = deleteLoc(head, &tail, 2);
            break;
        default :
            printf("w........\n");
            exit(0);
        }
    }
    return 0;
}