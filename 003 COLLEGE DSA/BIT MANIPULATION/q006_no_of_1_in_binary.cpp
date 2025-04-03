//WRITE A PROGRAM TO COUNT NUMBER OF ONE IN BINARY REPRESENTATION OF A NUMBER
#include<iostream>
using namespace std;
void no_of1(int);
void no_of1(int n){
    unsigned int count=0;
    while(n){
        if(n&1)
            count++;
        n=n>>1;
    }
    cout<<"The number of 1 in binary representation is "<<count<<endl;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    no_of1(n);
    return 0;
}
/*
OUTPUT
Enter number : 10
The number of 1 in binary representation is 2
*/