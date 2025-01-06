/*
N = 3 :
33333
32223
32123
32223
33333
*/
#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter number : ";
    cin>>n;
    x=n;
    for(int i = 0 ; i<2*n-1; i++){
        for(int j =0 ; j<2*n-1 ; j++){
            cout<<x;
            x=(i>j)?x-1:x;
            x=(i+j>=2*n-2)?x+1:x;
        }
        x=n;
        cout<<endl;
    }
return 0;
}
/*
OUTPUT
Enter number : 4
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/