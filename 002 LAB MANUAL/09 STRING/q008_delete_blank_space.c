/* Write a program to remove all the blank space from the string & print it, also count the no of characters. */
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int len,i,j=0;
    printf("Enter string : ");
    scanf("%[^\n]",str);
    len=strlen(str);
    char a[len];
    for(i=0;i<len;i++){
        if(str[i]==' ') 
            continue;
        else
            a[j++]=str[i];
    }
    len=strlen(a);
    printf("String with out blank space is : %s\n",a);
    printf("Number of character is : %d",len);
    return 0;
}
/*
OUTPUT :
Enter string : Deep Mandal
Entered string with out blank space is : DeepMandal
Number of character is : 10
*/