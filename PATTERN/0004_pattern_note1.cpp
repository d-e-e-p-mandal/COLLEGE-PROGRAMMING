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
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int i,j,sp;
    for(i = n ; i>0; i--){
        for(sp=0 ; sp<n-i ; sp++){
            cout<<n-sp;
        }
        for(j=0 ; j<2*i-1; j++){
            cout<<i;
        }
        for(sp=0 ; sp<n-i ; sp++){
            cout<<sp+i+1;
        }
        cout<<endl;
    }
    for(i = 1 ; i<n; i++){
        for(sp=0 ; sp<n-i-1 ; sp++){
            cout<<n-sp;
        }
        for(j=0 ; j<2*i+1; j++){
            cout<<i+1;
        }
        for(sp=0 ; sp<n-i-1 ; sp++){
            cout<<sp+i+2;
        }
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