/* Write a function reverseWord(char str[]) that takes as an argument and reverse it.
String : I love my India    Reverse String: India my love I */
#include<stdio.h>
#include<string.h>
void swap(char *a,char *b){
    char s;
    s=*a;
    *a=*b;
    *b=s;
}
void reverseStr(char str[],int len){
    int i,j;
    j=len-1;
    for(i=0;i<j;i++,j--)
        swap((str+i),(str+j));
}
void reverseWord(char *str,int len){
    int i=0,begin=0,end;
    for(i=0;i<=len;i++){
        if(str[i]=='\0'|| str[i]==' '){
            end=i-1;
            while(begin<end){
                swap((str+begin),(str+end));
                begin++;end--;
            }
            begin=i+1;
        }
    }
}
void reverseWordandStr(char *str,int len){
    reverseStr(str,len);
    reverseWord(str,len);
}
int main(){
    char str[20];
    int i,len;
    printf("Enter string : ");
    scanf("%[^\n]",str); // take input for one line or space
    len = strlen(str);
    reverseWordandStr(str,len);
    printf("%s",str);
    return 0;
}
/*
OUTPUT :
Enter string : I love my India
India my love I
*/