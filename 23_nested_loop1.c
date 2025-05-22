/*write a programe to display below  pattern(only one * in one printf statment)
*
**
***
****
*****.

*/
#include<stdio.h>
void main()

{
    int i,j;
    for(j=1;j<=5;j++)//2
    {
        for(i=1; i<=j;i++)
        {
            printf("*");
        }
        printf("\n");
    }
}