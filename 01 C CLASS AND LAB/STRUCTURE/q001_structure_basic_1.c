// Basic stracture - Input & Output
#include<stdio.h>
struct student{
	int rn ;
	char name[20];
	char cl[10];
	
}s1;
int main(){
	printf("Enter roll number : ");
	scanf("%d",&s1.rn);
    	printf("Enter name : ");
	scanf("%s",s1.name);
	printf("Enter class : ");
	scanf("%s",s1.cl);
	printf("You entered roll no %d\n",s1.rn);
	printf("You entered name %s\n",s1.name);
	printf("You entered class %s\n",s1.cl );
    return 0;

}
/*
Output :

Enter roll number : 21
Enter name : Deep
Enter class : Mca
You entered roll no 21
You entered name Deep
You entered class Mca
*/
