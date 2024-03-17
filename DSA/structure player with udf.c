#include<stdio.h>
struct player
{
    char pname[20],nationality[20];
    int rank,runs;
    float bating_avg;
}p1,p2,p3;

main()
{
    void Less_bating_avg(struct player p1,struct player p2,struct player p3);
    void Highest_ODI_Rank(struct player p1,struct player p2,struct player p3);

    //PLAYER 1 DETAILS
    printf("Enter the Name, nationality,ODI rank, total Runs and Bating avg of Plyaer 1\n");
    scanf("%s%s%d%d%f",&p1.pname,&p1.nationality,&p1.rank,&p1.runs,&p1.bating_avg);

    //PLAYER 2 DETAILS
     printf("Enter the Name, nationality,ODI rank, total Runs and Bating avg of Plyaer 1\n");
    scanf("%s%s%d%d%f",&p2.pname,&p2.nationality,&p2.rank,&p2.runs,&p2.bating_avg);

    //PLAYER 3 DETAILS
     printf("Enter the Name, nationality,ODI ran…
