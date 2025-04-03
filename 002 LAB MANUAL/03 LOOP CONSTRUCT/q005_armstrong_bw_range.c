// Armstrong number user input range
#include <stdio.h>
#include <math.h>
int main()
{
    int num_1, num_2, x, count, r;

    printf("Enter range of number : \n");
    scanf("%d%d", &num_1, &num_2);
    printf("Armstrong number between %d to %d :\n",num_1,num_2);
    for(int i = num_1; i <= num_2; i++){
        x = i;
        r=0;
        count=0;
        do{//usind do while for count 0 - as count 1
            x /= 10;
            count++;
        }while(x);
        // printf("%d\n",count);
        x = i;
        while(x){
            r+=pow((x%10),count);
            x /= 10;
        }
        if (r == i)
            printf("%d\t", i);
    }

    return 0;
}
/*OUTPUT
Enter range of number : 
0
1000
Armstrong number between 0 to 1000 :
0       1       2       3       4       5       6       7       8       9       153     370     371     407  
*/
