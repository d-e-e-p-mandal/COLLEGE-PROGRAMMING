//WRITE A PROGRAM TO CHECK GIVEN NUMBER IS POWER OF TWO OR NOT
#include<iostream>
using namespace std;
int isPowOf2(int);     //function declare
int isPowOf2(int n){   //function define
    return n && (n & ~n)==0;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    isPowOf2(n);
    if(isPowOf2(n))
        cout<<"The number is power of 2"<<endl;
    else
        cout<<"The number is not power of 2"<<endl;
    return 0;
}
/*
OUTPUT
Enter number : 0
The number is not power of 2

Enter number : 2
The number is power of 2
*/