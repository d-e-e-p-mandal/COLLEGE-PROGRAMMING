/* Write a function which delete all the repeated occurrences of a character from a string.
String : This book is very easy     Output : This bok very a */
#include<stdio.h>
#include<string.h>
int main(){
    char str[25]="This book is very easy",a[25];
    int i,j,len,flag,k=0;
    len=strlen(str);
    for(i=0;str[i]!='\0';i++){
        flag=1;
        for(j=0;j<i;j++){
            if(str[i]!=' ' && str[i]==str[j]){
                flag=0;
                break;
            }
        }
        if(flag)
            a[k++]=str[i];
    }
    printf("After delete repeated character : %s",a);
    return 0;
}
/*
OUTPUT :
After delete repeated character : This bok  very a
*/
