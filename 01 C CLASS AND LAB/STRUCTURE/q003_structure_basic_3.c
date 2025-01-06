// Array of Structure & copy
#include<stdio.h>
struct student {
int roll;
char name[20];
char class[10];
} s1[5];

int main(){
    int i;
    struct student p;
    for(i=0; i<5;i++){
        printf("Enter roll of student %d : ",i+1);
        scanf("%d", &s1[i].roll);
   
        printf("Enter name of student %d: ",i+1);
        scanf("%s", s1[i].name);
   
        printf("Enter class of student %d: ",i+1);
        scanf("%s", s1[i].class);
    } 
   for(i=0;i<5;i++){
        printf("\nYou entered Roll no : %d",s1[i].roll);
        printf("\nYou entered name    : %s",s1[i].name);
        printf("\nYou entered class   : %s\n",s1[i].class);
    }
    p=s1[0];
    printf("Copy output : %d",p.roll);
    return 0;
}
/*
Output :
Enter roll of student 1 : 1
Enter name of student 1: St1
Enter class of student 1: Mca
Enter roll of student 2 : 2
Enter name of student 2: St2
Enter class of student 2: Mca
Enter roll of student 3 : 3
Enter name of student 3: St3
Enter class of student 3: Mca
Enter roll of student 4 : 4
Enter name of student 4: St4
Enter class of student 4: Mca
Enter roll of student 5 : 5    
Enter name of student 5: St5
Enter class of student 5: Mca

You entered Roll no : 1
You entered name    : St1
You entered class   : Mca

You entered Roll no : 2
You entered name    : St2
You entered class   : Mca

You entered Roll no : 3
You entered name    : St3
You entered class   : Mca

You entered Roll no : 4
You entered name    : St4
You entered class   : Mca

You entered Roll no : 5
You entered name    : St5
You entered class   : Mca
Copy output : 1
*/
