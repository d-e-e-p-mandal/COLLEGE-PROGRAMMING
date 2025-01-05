// x rise in power of y 
#include<stdio.h>
int main(){
    int x,y,res=1;
    printf("x rise in the power of y \n");
    printf("Enter x and y :\n");
    scanf("%d%d",&x,&y);
    while(x){
        res*=y;
        x--;
    }
    printf("y^x = %d\n",res);   
return 0;
}
