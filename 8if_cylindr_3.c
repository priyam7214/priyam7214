/*
write a programe to findout which cylinder is bigger from two cylinder
1 = 
1 = creat variables
2 = tack value from user and store it in variables.
3 = creat logic for calculation all  cylinders surfase area.
    A=2πrh+2πr2
4 = display which cylinder is big and small.
5 = diplay thank you for visit
*/

#include<stdio.h>
void main()
{
    int radius1,radius2,hight1,hight2,area1,area2;
    printf("pls enter 1st cylender radius");
    scanf("%d",&radius1);

    printf("\npls enter 1st cylender hight");
    scanf("%d",&hight1);

    printf("\npls enter 2nd cylender radius");
    scanf("%d",&radius2);

    printf("\npls enter 2nd cylender hight");
    scanf("%d",&hight2);
    
    
(area1 = 2 * 3.14 * radius1 * hight1) + (2 * 3.14 * radius1 * radius1);
(area2 = 2 * 3.14 * radius2 * hight2) + (2 * 3.14 * radius2 * radius2);
    
if(area1<area2)
{
    printf("\n 1st cylender's area,: %d",area1);
    printf("\n 2nd cylender's area,: %d",area2);
    printf("\n cylender 2nd is bigger than first cylender.");
    printf("\n 2nd cylender> 1st cylender");
}
else
{
    printf("\n 1st cylendr's area,:%d",area1);
    printf("\n 2nd cylender's area,:%d",area2);
    printf("\n cylender 1st is bigger than 2nd cylender");
    printf("\n 2nd cylender< 1st cylender");
}
    printf("\n thank you for visit");
}