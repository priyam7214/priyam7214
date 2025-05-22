/*write a following pattern to sentence
    1
   21
  321
 4321
54321

*/
#include<stdio.h>
void main()
{
    int space=1,airstrick=1,row=5;
    while(row>=1)
    {
        while(space<=row)
        {
            printf(" ");
            space=space+1;

        }
        while(airstrick<=(6-row))
        {
            printf("* ",airstrick);
            airstrick++;
        }
        space=1;
        airstrick=1;
        printf("\n");
        row=row-1;
    }

       
}