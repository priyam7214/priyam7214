/*
    write a program to findout which circle is smaller from two circle's radius  given by user.

    steps
    1 = creat variables.
    2 = tack circles radius from user and stor it in variables.
    3 = creat logic for counting area.
    4 = display which circle is small.
*/

#include<stdio.h>
void main()
{
    float radius1,radius2,area1,area2;

    printf("entr the 1st circle radius");
    scanf("%f",&radius1);
     
    printf("\n enter the 2nd circle radius");
    scanf("%f",&radius2);

    area1=3.14 * radius1 * radius1;
    area2=3.14 * radius2 * radius2;

    if(area1>area2)
    {
        printf("\n circle 2nd is smaller than 1st circle");
    }
    else
    {
        printf("\n circlr 1st is smaller than 2nd circle");
    }
    printf("\n thank you for visit");
}