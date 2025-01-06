//typedef in structure
/* typedef use for rename */
#include<stdio.h>
typedef struct student
    {
    char name[20];
    int roll;
}s1;
int main(){
    s1 p;
    printf("enter name : ");
    scanf("%s",p.name);
    printf("enter roll : ");
    scanf("%d",&p.roll);
    printf("you entered %s and %d\n",p.name,p.roll);  
    return 0;
}