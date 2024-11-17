// binary search


#include<stdio.h>
int main(){
    int a[10],i,j,search_element,flag=1,s;
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
    while(low<=high&&flag==1){
        mid=(low+high)/2;
        if(a[mid]==search_element){
            printf("The element in found at positions %d\n",mid+1);
            flag=0;
        }
        else if(a[mid]<search_element)
            low=low+1;
        else
            high=high-1;
    }
    if(flag)
        printf("The element not found\n");
        
return 0;
}
