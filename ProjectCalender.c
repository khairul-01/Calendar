#include<stdio.h>
int StrDayofYr(int y)
{
    int day = (y*365+((y-1)/4)-((y-1)/100)+((y-1)/400))%7;
    return day;
}
int main()
{
    char *month[] = {"January","February","March","April",
                     "May","June","July","August","September",
                     "October","November","December"};
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int permday,week,spaceC=0,year;
    printf("\n\n\t\t\tEnter a year to see date:- ");
    scanf("%d",&year);
    printf("\n\t\t\t************** Welcome to %d ***************\n\n",year);
    if(year%4==0&&year%100!=0||year%400==0){
        days[1] = 29;
    }
    week = StrDayofYr(year);
    for(int i=0;i<12;i++)
    {
        printf("\n\t\t\t-------------------%s-------------------\n",month[i]);
        printf("\n\n\n\t\t\t   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n\n\t\t\t");

        for(spaceC=1;spaceC<=week;spaceC++){
            printf("      ");
        }
        permday = days[i];
        for(int j=1;j<=permday;j++)
        {
            printf("%6d",j);
            week++;
            if(week > 6){
                printf("\n\t\t\t");
                week =0;
            }
        }
        printf("\n\n\n\t\t\t");
    }


    return 0;
}
