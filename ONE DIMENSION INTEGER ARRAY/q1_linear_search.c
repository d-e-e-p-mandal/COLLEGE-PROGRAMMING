// linear search in array
 #include<stdio.h>
 int main(){
    int a[10],i,search_element,flag=1;
    printf("Enter array element : \n");
    for(i = 0 ; i<10 ; i++)
        scanf("%d",&a[i]);
    printf("Enter search element : \n");
    scanf("%d",&search_element);
    for(i = 0 ; i <10 ; i++){
        if(search_element==a[i]){
            printf("The element found at position %d\n",i+1);   
            flag=0;
        }
    }
    if(flag)
        printf("The element not found in array\n");
        
 return 0;
 }