/* CLEAR-BIT 
CLEAR 1 AT POSITIONS - SET 0 AT POSITION
*/
#include<iostream>
using namespace std;
int clearBit(int ,int );  //function declare
int clearBit(int n,int pos){  //function define
    return n&(~(1<<pos));
}
int main(){
    int n,pos;
    cout<<"Enter number ";
    cin>>n;
    cout<<"Enter positions ";
    cin>>pos;
    cout<<"After clear bit at "<<pos<< " = "<<clearBit(n,pos)<<endl;//function call
    return 0;
}
/*
OUTPUT
Enter number 10
Enter positions 1
After clear bit at 1 = 8
*/