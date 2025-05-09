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
    else if(legnth<width)
    {
        printf("this shape is landscape");
    
    }
    else
    {
        printf("this shape is square");
    }
    printf("\n nice");
}