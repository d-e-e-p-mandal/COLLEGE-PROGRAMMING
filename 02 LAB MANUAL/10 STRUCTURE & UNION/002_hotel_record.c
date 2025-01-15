/*Define a structure that can describe a hotel. It should have the member that includes the name, address, grade,
room charge and number of rooms. Write a function to print out hotel of given grade in order of room charges. */
#include<stdio.h>
typedef struct hotel{
    char h_name[20];
    char h_address[20];
    char grade;
    int rc;
    unsigned int r_no ;
}h;

void printHotelByGrade(h *htl,int no_h,char grade){
    int i;
    for(i=0;i<no_h;i++){
        if((htl+i)->grade==grade){
            printf("Hotel name  :%10s\t",(htl+i)->h_name);
            printf("Hotel Address :%10s\t",(htl+i)->h_address);
            printf("Hotel grade : %3c\t",(htl+i)->grade);
            printf("Hotel charge : %3d\t",(htl+i)->rc);
            printf("Number of room : %3u\n",(htl+i)->r_no);
        } 
    }
}
int main(){
    int no_h,i;
    printf("Enter number of hotel : ");
    scanf("%d",&no_h);
    h ht[no_h];
    char find_grade;
    for(i=0;i<no_h;i++){
        printf("Enter hotel name : ");
        scanf(" %[^\n]",ht[i].h_name);

        printf("Enter hotel address : ");
        scanf(" %[^\n]",ht[i].h_address);

        printf("Enter hotel grade (A,B,C,D) : ");
        scanf(" %c",&ht[i].grade);

        printf("Enter room charge : ");
        scanf(" %d",&ht[i].rc);

        printf("Enter number of room : ");
        scanf(" %u", &ht[i].r_no);
    }

    printf("Enter grade(A,B,C,D) to find hotel : ");
    scanf(" %c",&find_grade);
    printHotelByGrade(ht,no_h,find_grade);
    return 0;
}
/*
OUTPUT :
Enter number of hotel : 5
Enter hotel name : HOTEL A
Enter hotel address : ADDRESS A
Enter hotel grade (A,B,C,D) : A
Enter room charge : 1000
Enter number of room : 10
Enter hotel name : HOTEL B
Enter hotel address : ADDRESS B
Enter hotel grade (A,B,C,D) : B
Enter room charge : 900 
Enter number of room : 15
Enter hotel name : HOTEL C
Enter hotel address : ADDRESS C
Enter hotel grade (A,B,C,D) : C
Enter room charge : 700
Enter number of room : 30
Enter hotel name : HOTEL D
Enter hotel address : ADDRESS D
Enter hotel grade (A,B,C,D) : D
Enter room charge : 500
Enter number of room : 50
Enter hotel name : HOTEL E
Enter hotel address : ADDRESS E
Enter hotel grade (A,B,C,D) : A
Enter room charge : 1100
Enter number of room : 7
Enter grade(A,B,C,D) to find hotel : A
Hotel name  :   HOTEL A Hotel Address : ADDRESS A       Hotel grade :   A       Hotel charge : 1000     Number of room :  10
Hotel name  :   HOTEL E Hotel Address : ADDRESS E       Hotel grade :   A       Hotel charge : 1100     Number of room :   7
*/
