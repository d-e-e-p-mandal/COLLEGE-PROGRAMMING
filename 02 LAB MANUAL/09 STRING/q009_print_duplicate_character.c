/* Print all the duplicate characters in a string Given a string S, the task is to 
print all the duplicate characters with their occurrences in the given string. */
#include<stdio.h>
#include<string.h>
int main(){
    char str[20]={"goodorgood"};
    int len,i,j;
    len=strlen(str);
    int arr[26];
    for(i=0;i<26;i++)  
        arr[i]=0;
    
    for(i=0;i<len;i++){
        arr[str[i]-97]+=1;
    }
    for(i=0;i<26;i++){
       if(arr[i])
            printf("%c, count : %d\n",i+97,arr[i]);
    }
    return 0;
}
/*
OUTPUT :
d, count : 2
g, count : 2
o, count : 5
r, count : 1
*/