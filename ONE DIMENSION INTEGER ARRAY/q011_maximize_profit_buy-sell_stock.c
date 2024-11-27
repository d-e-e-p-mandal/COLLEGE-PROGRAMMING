// STOCK BUY SELL TO MAXIMIZE PROFIT
#include<stdio.h>
int main(){
    int n,buy,sell,profit=0,i,j,k;
    printf("Enter total days : ");
    scanf("%d",&n);
    int a[n];
    for(i = 0 ; i < n ; i++){//input
        printf("Enter price of day %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i= 0 ; i<n-1 ; ){
        for(j= i ; j < n-1 ; ){//for buy
            if(a[j]<a[j+1]){
                buy= a[j];
                break;
            }
            else 
                j++;
        }
        for(k= j+1 ; k < n ; ){
            if((a[k]-buy)>(a[k+1]-buy) || k ==n-1){ // for sell
                sell = a[k];
                break;
            }
            else 
                k++;
        }
        i=k+1;
        profit+=(sell-buy);
        buy=sell=0;
    }
    printf("Maximum profit = %d\n",profit);//output  
return 0;
}
/*
OUTPUT 1 :
Enter total days : 7
Enter price of day 1 : 100
Enter price of day 2 : 180
Enter price of day 3 : 260
Enter price of day 4 : 310
Enter price of day 5 : 40
Enter price of day 6 : 535
Enter price of day 7 : 695
Maximum profit = 865

OUTPUT : 2
Enter total days : 10
Enter price of day 1 : 10
Enter price of day 2 : 5
Enter price of day 3 : 2
Enter price of day 4 : 15
Enter price of day 5 : 10
Enter price of day 6 : 20
Enter price of day 7 : 40
Enter price of day 8 : 30
Enter price of day 9 : 10
Enter price of day 10 : 9
Maximum profit = 43


*/
