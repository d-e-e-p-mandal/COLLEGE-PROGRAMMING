/* Write program to sort the array of character (String) in alphabetical order like STRING in GINRST. */
#include<stdio.h>
#include<string.h>
void swap(char *x,char *y){
    char s;
    s=*x;
    *x=*y;
    *y=s;
}
int main(){
    char str[20]="STRING";
    int i,j,len;
    len=strlen(str);
    for(i=len-1;i>0;i--){
        for(j=0;j<i;j++){
            if(strcmp(str+j,str+j+1)>0){
                swap((str+j),(str+(j+1)));
            }
        }
    }
    printf("Alphabetical order : %s",str);
    return 0;
}
/*
OUTPUT :
Alphabetical order : GINRST
*/
