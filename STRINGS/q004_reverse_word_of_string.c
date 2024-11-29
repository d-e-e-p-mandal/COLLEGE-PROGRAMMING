/*
Write a function reverseWordLetter(char str[]) that takes
as an argument and reverse it.
*/

#include <stdio.h>
void revword(char *str) {
    int i,j,l,p,q;
    for(l=0;str[l]!='\0';l++);
    char temp;
    for(i=0; i<l;){
        for(j=i+1;str[j]!=' ' && str[j]!='\0';j++);
            p=i+1;q=j-1; //swaping
            while(p<q){
                temp = str[p];
                str[p] = str[q];
                str[q] = temp;
                p++;q--;
            }
            i=j;
    }
}

int main() {
    char str[50];
    printf("Enter string : ");
    gets(str);
    //flashall();
    // Reverse the word of string
    revword(str);

    printf("Reversed word of the String : %s\n", str);

    return 0;
}
/*
OUTPUT
Enter string : I love my India
Reversed word of the String : I evol ym aidnI
*/
