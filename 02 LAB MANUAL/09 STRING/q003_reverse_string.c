/* Write a function reverseStr(char str[]) that takes as argument and reverse it.
String :- amit kumar    Reverse String :- ramuk tima */
#include<stdio.h>
#include<string.h>
void swap(char *a,char *b){
    char s;
    s=*a;
    *a=*b;
    *b=s;
}
void reverse(char str[],int len){
    int i,j;
    j=len-1;
    for(i=0;i<j;i++,j--)
        swap((str+i),(str+j));
}
int main(){
    char str[20];
    int i,len;
    printf("Enter string : ");
    scanf("%[^\n]",str); // take input for one line or space
    len = strlen(str);
    reverse(str,len);
    printf("%s",str);
    return 0;
}
/*
OUTPUT :
Enter string : amit kumar
ramuk tima% 
*/