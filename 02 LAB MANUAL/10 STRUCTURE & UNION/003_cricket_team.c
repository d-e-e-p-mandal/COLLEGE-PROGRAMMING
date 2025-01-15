/*
Define a structure called cricket with player name, team name, batting average, for 50 players & 5 teams.
Print team wise list contains names of player with their batting average.
*/
#include<stdio.h>
#include<string.h>
typedef struct cricket{
    char pl_name[20];
    char t_name[20];
    int b_avg;
}ct;
int main(){
    int n,i,flag=1;
    printf("Enter number of player : ");
    scanf("%d",&n);
    ct player[n];
    char find_team[20];
    for(i=0;i<n;i++){
        printf("Enter player name : ");
        scanf(" %[^\n]",player[i].pl_name);
        printf("Enter Team name   : ");
        scanf(" %[^\n]",player[i].t_name);
        printf("Enter batting avg : ");
        scanf(" %d",&player[i].b_avg);
    }
    printf("Enter team name which team list is required : ");
    scanf(" %[^\n]",find_team);
    for(i=0;i<n;i++){
        if(strcmp(find_team,player[i].t_name)==0){
            printf("player name : %20s  team name : %3s   batting avg : %3d\n",player[i].pl_name,player[i].t_name,player[i].b_avg);
            flag=0;
        }
    }
    if(flag)
        printf("No player found in list. \n");
    return 0;
}
/*
OUTPUT :

Enter number of player : 10
Enter player name : SACHIN
Enter Team name   : MI
Enter batting avg : 60
Enter player name : VIRAT
Enter Team name   : RCB
Enter batting avg : 55
Enter player name : ROHIT
Enter Team name   : MI
Enter batting avg : 45
Enter player name : MS DHONI
Enter Team name   : CSK
Enter batting avg : 40
Enter player name : GILL
Enter Team name   : KKR
Enter batting avg : 35
Enter player name : GAMBHIR
Enter Team name   : KKR
Enter batting avg : 50
Enter player name : HARDIK PANDIYA
Enter Team name   : MI
Enter batting avg : 40
Enter player name : JAISWAL
Enter Team name   : RR
Enter batting avg : 45
Enter player name : RINKU SING
Enter Team name   : KKR
Enter batting avg : 30
Enter player name : BUMRAH
Enter Team name   : MI
Enter batting avg : 15
Enter team name which team list is required : MI
player name :              SACHIN  team name :  MI   batting avg :  60
player name :               ROHIT  team name :  MI   batting avg :  45
player name :      HARDIK PANDIYA  team name :  MI   batting avg :  40
player name :              BUMRAH  team name :  MI   batting avg :  15
*/
