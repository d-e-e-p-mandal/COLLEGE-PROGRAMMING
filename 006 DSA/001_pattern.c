#include<stdio.h>
void pattern1(int n) {
    int i,j;

    for(i=1; i<=n; i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}

void pattern2(int n) {
    int i,j;

    for(i=1; i<=n; i++){
        for(j=1;j<=n-i+1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}

void pattern3(int n) {
    int i,j;

    for(i=0; i<n; i++){
        for(j=0;j<i;j++){
            printf(" ");
        }
        for(j=0;j<n-i;j++){
            printf("%d",n-j-i);
        }
        printf("\n");
    }
}

void pattern4(int n){
    int i,j;

    for(i=0;i<n;i++){
        int x = i+1;
        for(j=1;j<n-i; j++){
            printf(" ");
        }
        for(j=0;j<2*i+1; j++){
            printf("%d",x);
            x=(j<i)?x-1:x+1;
        }
        printf("\n");
        
    }
}

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    //pattern1(n);
    //pattern2(n);
    //pattern3(n);
    pattern4(n);
    return 0;
}