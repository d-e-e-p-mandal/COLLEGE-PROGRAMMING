/*
Chocolate Distribution Problem
Given an array A[ ] of positive integers of size N, where each
value represents the number of chocolates in a packet. Each
packet can have a variable number of chocolates. There are
M students, the task is to distribute chocolate packets among
M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates
given to a student and minimum number of chocolates given
to a student is minimum.
*/

#include<stdio.h>
int main(){
    int n,m,i,j,s,r1,r2,min;
    printf("Enter number of packet : ");
    scanf("%d",&n);
    printf("Enter number of students : ");
    scanf("%d",&m);

    int a[n];
    //input
    for(i=0;i<n;i++){
        printf("Enter number of cholocate in pacaket number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    
    //shorting-bubble
    for(int i = n-1 ; i > 0 ; i-- ){
       for(int j = 0 ; j < i ; j++){
            if(a[j]>a[j+1]){
                s = a[j];
                a[j] = a[j+1];
                a[j+1]= s;
            }
        } 
    }
    
    //
    for(i=0,j=i+m-1;i<=n-m;i++,j++){
        if(i==0){
            min=a[j]-a[i];
            r1=i;r2=j;
        }
        else{
            if((a[j]-a[i])<min){
                min=a[j]-a[i];
                r1=i;r2=j;
            }
        }
    }
    //output
    printf("1st student will get %d chocolate\n",a[r1]);
    printf("2nd student will get %d chocolate\n",a[r1+1]);
    if(m>=3)
        printf("3rd student will get %d chocolate\n",a[r1+2]);
    if(m>3)
        for(i=3;i<m;i++){
            printf("%dth student will get %d chocolate\n",i+1,a[r1+i]);
        }
    printf("Minimum chocolate %d\n",a[r1]);
    printf("Maximum chocolate %d\n",a[r2]);
    return 0;
}



/*
OUTPUT
Enter number of packet : 5
Enter number of students : 3
Enter number of cholocate in pacaket number 1 : 10
Enter number of cholocate in pacaket number 2 : 20
Enter number of cholocate in pacaket number 3 : 30
Enter number of cholocate in pacaket number 4 : 40
Enter number of cholocate in pacaket number 5 : 41
1st student will get 30 chocolate
2nd student will get 40 chocolate
3rd student will get 41 chocolate
Minimum chocolate 30
Maximum chocolate 41

||
Enter number of packet : 10
Enter number of students : 5
Enter number of cholocate in pacaket number 1 : 12
Enter number of cholocate in pacaket number 2 : 45
Enter number of cholocate in pacaket number 3 : 56
Enter number of cholocate in pacaket number 4 : 67
Enter number of cholocate in pacaket number 5 : 78
Enter number of cholocate in pacaket number 6 : 6
Enter number of cholocate in pacaket number 7 : 87
Enter number of cholocate in pacaket number 8 : 45
Enter number of cholocate in pacaket number 9 : 34
Enter number of cholocate in pacaket number 10 : 64
1st student will get 45 chocolate
2nd student will get 45 chocolate
3rd student will get 56 chocolate
4th student will get 64 chocolate
5th student will get 67 chocolate
Minimum chocolate 45
Maximum chocolate 67

*/