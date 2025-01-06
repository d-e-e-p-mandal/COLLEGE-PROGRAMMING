// Basic structure - typedef - object create
#include<stdio.h>
typedef struct student{
	int rn ;
	char name[20];
	char cl[10];
	
}s1;
int main(){
    s1 st;
	printf("Enter roll number : ");
	scanf("%d",&st.rn);
    printf("Enter name : ");
	scanf("%s",st.name);
	printf("Enter class : ");
	scanf("%s",st.cl);
	printf("You entered roll no %d\n",st.rn);
	printf("You entered name %s\n",st.name);
	printf("You entered class %s\n",st.cl );
    return 0;

}
/*
Output :

Enter roll number : 12
Enter name : Abcd
Enter class : Xyz
You entered roll no 12
You entered name Abcd
You entered class Xyz
*/
