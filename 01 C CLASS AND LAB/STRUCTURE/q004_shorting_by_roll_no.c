// input 5 student roll , no name and class - shorting by roll no

#include<stdio.h>
struct student {
int roll;
char name[20];
char class[10];
} s1[5];
int main(){
    int i,j;
    struct student p;
        for(i=0; i<5;i++){//input 5 student data
        printf("Enter roll of student %d : ",i+1);
        scanf("%d", &s1[i].roll);
   
        printf("Enter name of student %d: ",i+1);
        scanf("%s", s1[i].name);
   
        printf("Enter class of student %d: ",i+1);
        scanf("%s", s1[i].class);
        
    } 

    //shorting by roll number
    for(i = 4 ; i > 0 ; i-- ){
       for(j = 0 ; j < i ; j++){
            if(s1[j].roll>s1[j+1].roll){
                p = s1[j];
                s1[j]= s1[j+1];
                s1[j+1]= p;
            }
       } 
    }
    for(i=0;i<5;i++){//output
        printf("\nYou entered Roll no : %d",s1[i].roll);
        printf("\nYou entered name    : %s",s1[i].name);
        printf("\nYou entered class   : %s\n",s1[i].class);
    }
    
    return 0;
}