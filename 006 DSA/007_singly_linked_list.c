#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *createNode(){
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node *));
    if(newNode == NULL) {// if(!newNode)
        printf("Overflow......\n");
        return NULL;
    }
    printf("Enter Data : ");
    scanf("%d",&newNode->data); //scanf("%d", &newNode->data); or  scanf("%d", (int *)((char *)newNode + offsetof(struct Node, data)));
    
    newNode->next = NULL; // (*newNode).data = NULL; 

    return newNode;
}

void display(struct node *head){
    if(head == NULL) {
        printf("\033[7;31mList is already empty......\033[0m\n");
        return;
    }
    printf("\033[7;34mYour List is :\033[0m\n");
    while(head != NULL){
        printf("\033[7;34m%d\033[0m\n",head->data);
        head = head -> next;
    }
}

struct node *addBegin(struct node *head) {
    struct node *newNode = createNode();
    newNode -> next = head;
    head = newNode;
    
    return head;
}

struct node * addEnd(struct node *head) {
    struct node *newNode = createNode();
    if(head == NULL){
        newNode -> next = head;
        head = newNode;
        return head;
    }
    struct node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newNode;
    newNode -> next = NULL;

    return head;
}

struct node *addPos(struct node *head) {
    int pos;
    printf("Enter position : \n");
    scanf("%d",&pos);

    if(pos == 1){
        head = addBegin(head);
        return head;
    }
    if(head == NULL){
        printf("Overflow occoured.......position is greater than node.\n");
        return NULL;
    }

    struct node *temp,*newNode;
    newNode = createNode();
    temp = head;
    while(pos >2 && temp ->next != NULL){
        pos--;
        temp = temp ->next;
    }
    if(pos > 2 ){
        printf("Overflow occured......positon is greater than node.\n");
        return head;
    }

    newNode -> next = temp->next;
    temp ->next = newNode;

    return head;
}

struct node *deleteBegin(struct node *head) {
    if( head == NULL){
        printf("List is already empty.\n");
        return NULL;
    }
    struct node *temp = head;
    head = head -> next;
    free(temp);

    return head;
}

struct node *deleteEnd(struct node *head){
    if(head == NULL){
        printf("List is already empty......\n");
        return NULL;
    }
    struct node *prev,*temp;
    temp = head;
    if(temp -> next == NULL){
        head = NULL;
        printf("Deleting : %d\n",temp->data);
        free(temp);
        return head;
    }

    while(temp -> next != NULL){
        prev = temp;
        temp = temp -> next;
    }
    prev -> next = NULL;
    printf("Deleting : %d\n",temp->data);
    free(temp);

    return head;
}

struct node *deletePos(struct node *head) {
    int pos;
    printf("Enter position to delete : ");
    scanf("%d",&pos);

    if(head == NULL){
        printf("List is already emppty.\n");
        return NULL;
    }
    struct node *temp,*prev;
    temp = head;
    if(pos == 1){
        head = head -> next;
        printf("Deleting : %d\n",temp->data);
        free(temp);
        return head;
    }

    while(pos > 1 && temp -> next != NULL){
        pos--;
        prev = temp;
        temp = temp -> next;
    }
    if(pos > 1) {
        printf("Position is greater than number of node .....\n");
        return head;
    }

    prev -> next = temp -> next;
    printf("Deleting : %d\n",temp->data);
    free(temp);

    return head;
}

int main(){
    int choice;
    struct node *head = NULL;

    while(1) {
        printf("\033[1;34m1......for Display\033[0m\n");
        printf("\033[1;32m2......for add at first\033[0m\n");
        printf("\033[1;32m3......for add at End\033[0m\n");
        printf("\033[1;32m4......for add position\033[0m\n");
        printf("\033[1;31m5......for delete first\033[0m\n");
        printf("\033[1;31m6......for delete end\033[0m\n");
        printf("\033[1;31m7......for delete pos\033[0m\n");
        printf("Others for exit ....... \n");

        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        switch (choice){
        case 1:
            display(head);
            break;
        case 2:
            head = addBegin(head);
            break;
        case 3:
            head = addEnd(head);
            break;
        case 4:
            head = addPos(head);
            break;
        case 5:
            head = deleteBegin(head);
            break;
        case 6:
            head = deleteEnd(head);
            break;
        case 7:
            head = deletePos(head);
            break;
        default:
            printf("ENDED\n");
            exit(0);
        }

    }

    return 0;
}