/*
write a program to find out whether shape is potrait landscape or square from given legnth and wigth
steps__________________
1 = crate variable legnth and width
2 = accept input variable legnth and width
3 = compare legnth and with check to shape is potrait 
if legnth>width
    display message shape is potrait
5 = compare legnth and with check to shape is landscape
 if legnth<width
     display message shape is landscape 
6 = compare legnth and with check to shape is square
if legnth==width
    dispaly message shape is square
*/

#include<stdio.h>
void main()
{
    int legnth,width;
    printf("enter legnth");
    scanf("%d",&legnth);
    printf("enter width");
    scanf("%d",&width);

    if(legnth>width)
    {
        printf("this shape is potrait");
    }

    if(legnth<width)
    {
        printf("this shape is landscape");
    }

    if(legnth==width)
    {
        printf("this shape is square");
    }

    printf("\n goodbye");

}