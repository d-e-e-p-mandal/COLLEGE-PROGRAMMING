// PERMUTATION 
#include<stdio.h>
#include<string.h>
int fact(int a);    //function declare     
void swap(char *x, char *y);
int main(){         //driver code
    char str[5];
    printf("Enter character or number : ");
    scanf("%s",str);
    int i,j,length,factorial;
    length = strlen(str);
    factorial=fact(length);
    for(i=0;i<factorial;i++){
        printf("%s\n",str);
        j=i%(length-1);
        swap((str+j),(str+j+1));
    }
    return 0;
}
void swap(char *x, char *y){    //function define
    char temp;
    temp = *x;
    *x=*y;
    *y=temp;
}
int fact(int n){
    int i,f=1;
    for(i=n;i>0;i--)
        f*=i;
    return f;
}

/*
OUTPUT
Enter character or name : ABC
ABC
BAC
BCA
CBA
CAB
ACB
*/
