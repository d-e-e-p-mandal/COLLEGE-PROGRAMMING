//merge two shorted arry 
#include<stdio.h>
int main(){
    int a[10],b[10],i,j,k=0,s,size_a=10,size_b=10;
    printf("Enter element of 1st array : \n");
    for(i =0 ; i< 10 ; i++)//input 1st array
        scanf("%d",&a[i]);
    printf("Enter element of 2nd array : \n");//input 2nd array
    for(i =0 ; i< 10 ; i++)
        scanf("%d",&b[i]);
    // // short (bubble short) 1st aray
    for(i = 9 ; i > 0 ; i-- ){
       for(j = 0 ; j < i ; j++){
            if(a[j]>a[j+1]){
                s = a[j];
                a[j] = a[j+1];
                a[j+1]= s;
            }  
        }
    } 
    // short (bubble short) 2nd aray
    for(i = 9 ; i > 0 ; i-- ){
       for(j = 0 ; j < i ; j++){
            if(b[j]>b[j+1]){
                s = b[j];
                b[j] = b[j+1];
                b[j+1]= s;
            }
       }
    }
    int newsize=size_a+size_b;
    int x[newsize],flag;

    for(i = 0 ; i < newsize ; i++){
        if(i<size_a){
            x[i]=a[i];
        }
        if(i>=size_a){
            x[i]=b[i-10];
        }
    }

    //delete duplicate
    for(i = 0 ; i<newsize ; i++ ){
        flag=1; 
        for(j = 0 ; j< i ; j++){
            if(x[j]==x[i]){
                flag = 0 ;
                break;
            }
        }
        if(flag){
            x[k]=x[i];
            k++;
        }
    }
    //output
    printf("After merging\n");
    for(i = 0 ; i < k ;i++)
        printf("%d\t",x[i]);
        
return 0;
}