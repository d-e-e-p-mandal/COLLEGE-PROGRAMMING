/* UPDATE-BIT 
UPDATE BIT = CLEAR BIT AND SET BIT
*/
#include<iostream>
using namespace std;
int updateBit(int ,int ,int );  //function declare
int updateBit(int n,int pos,int value){  //function define
    n = n&(~(1<<pos));
    return n|(value<<pos);
}
int main(){
    int n,pos,value;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Enter positions : ";
    cin>>pos;
    cout<<"Enter value 0 or 1 : ";
    cin>>value;
    cout<<"After update bit at "<<pos<< " = "<<updateBit(n,pos,value)<<endl;//function call
    return 0;
}
/*
OUTPUT
Enter number : 7
Enter positions : 1
Enter value 0 or 1 : 0
After update bit at 1 = 5
*/