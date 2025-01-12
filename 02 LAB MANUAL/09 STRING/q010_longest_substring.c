/* LONGEST SUBSTRING WITHOUT REPEATING CHARACTERS Given a string s, find the length of 
the longest substring without repeating characters.
Example 1:Input: s = "abcabcbb",Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2: Input: s = "bbbbb",Output: 1
Explanation: The answer is "b", with the length of 1.*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i,j,len,count=1,maxCount=1,x=0;
    printf("Enter string : ");
    scanf("%s",str);
    len = strlen(str);
    for(i=1;i<len;i++){
        count=1;
        for(j=x;j<i;j++){
            if(str[j]!=str[i])
                count++;
            else{
                x=j+1;
                break;
            }
                
        }
        maxCount=(maxCount<count)?count:maxCount;
    }
    printf("The length of the longest substring without repeating characters %d",maxCount);
    return 0;
}
/*
OUTPUT :
Enter string : pwwkew
The length of the longest substring without repeating characters 3
*/
