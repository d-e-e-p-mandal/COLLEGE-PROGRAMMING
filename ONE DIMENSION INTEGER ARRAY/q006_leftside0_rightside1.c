// all zero left side and 1 in right side
#include<stdio.h>
int main(){
    int a[10],i,j,s;
    printf("Enter number 0 or 1 : \n");
    for(i = 0 ; i<10 ; i++)
        scanf("%d",&a[i]);
    for(i=0 , j =9 ; i<j ; ){
        if(a[i]==1&&a[j]==0){
            s=a[i];
            a[i]=a[j];
            a[j]=s;
            i++;j--;
        }
        if(a[i]==0)
            i++;
        if(a[j]==1)
            j--;
    }
    for(i = 0 ; i<10 ; i++)
        printf("%d\n",a[i]);
return 0;
}
