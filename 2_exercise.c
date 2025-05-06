/*
1) write a program to findout whether given year is millennium year or 
not. using simple decision making statements. 
using simple decision making statements.

1  create a variable of the year
2  enter the year
3  millenium year = year/1000

*/
#include<stdio.h>
void main()
{
    int year;
    printf ("enter the year");
    scanf("%d",&year);

    if(year%1000==0)
    {
        printf("this year millenium");

    }
    if(year%1000!=0)
    {
        printf("this year is not millenium");

    }
    printf("\nthankyou");
    
}