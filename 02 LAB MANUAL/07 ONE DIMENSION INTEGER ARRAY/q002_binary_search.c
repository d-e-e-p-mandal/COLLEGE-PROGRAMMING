// binary search


#include<stdio.h>
int main(){
    int a[10],i,j,search_element,flag=0,s;
    printf("Enter array element : \n");//input
    for(i = 0 ; i< 10 ;i++)
        scanf("%d",&a[i]);
    printf("Enter search element : \n");
    scanf("%d",&search_element);
    // bubble short
    for(int i = 9 ; i > 0 ; i-- ){
       for(int j = 0 ; j < i ; j++){
            if(a[j]>a[j+1]){
                s = a[j];
                a[j] = a[j+1];
                a[j+1]= s;
            }
       } 
    }
    // search
    int low=0 , high = 9 , mid;
    while(low<=high&&flag==0){
        mid=(low+high)/2;
        if(a[mid]==search_element){
            flag=1;
            break;
        }
        else if(a[mid]<search_element)
            low=mid+1;
        else
            high=mid-1;
    }
    if(flag)
        printf("The element in found at positions %d\n",mid+1);// shorted positions
    else
        printf("The element not found\n");
        
return 0;
}
