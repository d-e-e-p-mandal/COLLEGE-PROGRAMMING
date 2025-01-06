//WRITE A PROGRAM TO GENERATE ALL SUBSET OF A SET
/*
Hint : {a,b,c}
      000
      001
      010
      011
      100
      101
      110
      111
print a,b or c where in one in binary repesntation to pow(2,n)-1
*/

#include<iostream>
using namespace std;
void subsets(int,int);
void subsets(int arr[],int size){
    for(int i=0; i<(1<<size);i++){
        for(int j=0; j<size;j++){
            if(i&(1<<j))
                cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[]={1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    subsets(arr,size);
    return 0;
}
/*
OUTPUT :

1 
2 
1 2 
3 
1 3 
2 3 
1 2 3 
4 
1 4 
2 4 
1 2 4 
3 4 
1 3 4 
2 3 4 
1 2 3 4 
*/
