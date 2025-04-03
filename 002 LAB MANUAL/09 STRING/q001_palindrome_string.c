/* Write a program in C to check whether the given string is a
palindrome or not. */
#include<stdio.h>
#include<string.h>
void isPalindrome(char *str,int len){
    int i,j;
    j=len-1;
    for(i=0;i<j;i++,j--){
        if(str[i]!=str[j]){
            printf("Not Palindrome");
            return ;
        }
    }
    printf("Palindrome");
}
int main(){
    char str[20];
    int i,len;
    printf("Enter string : ");
    scanf("%[^\n]",str); // take input for one line or space
    len = strlen(str);
    isPalindrome(str,len);
    return 0;
}
/*
OUTPUT
Enter string : nitin
Palindrome
*/