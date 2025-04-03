/* Create a user define function replace Character() that replace character from the string.
String : This book is very easy     Character : s replace character : p */
#include<stdio.h>
#include<string.h>
void ReplaceWord(char *str,int len){
    char r,w;
    int i;
    printf("Enter replace word and With which word : ");
    scanf(" %c %c",&r,&w);
    for(i=0;i<len;i++){
        if(str[i]==r){
            str[i]=w;
        }
    }
}
int main(){
    char str[25],w;
    int i,len;
    printf("Enter string : ");
    scanf("%[^\n]",str); // take input for one line or space
    len = strlen(str);
    ReplaceWord(str,len);
    printf("Now string is : %s\n",str);
    return 0;
}
/*
OUTPUT
Enter string : This book is very easy
Enter replace word and With which word : s p
Now string is : Thip book ip very eapy
*/
