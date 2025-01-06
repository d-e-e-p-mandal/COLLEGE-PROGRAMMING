/* SET-BIT 
SET 1 AT POSITIONS
*/
#include<iostream>
using namespace std;
int setbit(int ,int );  //function declare
int setbit(int n,int pos){  //function define
    return n|(1<<pos);
}
int main(){
    int n,pos;
    cout<<"Enter number ";
    cin>>n;
    cout<<"Enter positions ";
    cin>>pos;
    cout<<"After Set bit at "<<pos<< " = "<<setbit(n,pos)<<endl;//function call
    return 0;
}
/*
OUTPUT
Enter number 10
Enter positions 2
After Set bit at 2 = 14
*/