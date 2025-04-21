/* GET-BIT 
TELL 0 OR 1 AT POSITIONS 
*/
#include<iostream>
using namespace std;
int getbit(int ,int );  //function declare
int getbit(int n,int pos){  //function define
    return (n&(1<<pos))!=0;
}
int main(){
    int n,pos;
    cout<<"Enter number ";
    cin>>n;
    cout<<"Enter positions ";
    cin>>pos;
    cout<<"Get bit at "<<pos<< " = "<<getbit(n,pos)<<endl;//function call
    return 0;
}
/*
OUTPUT
Enter number 5
Enter positions 2
Get bit at 2 = 1

Enter number 10
Enter positions 2
Get bit at 2 = 0

*/