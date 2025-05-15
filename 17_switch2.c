/*
write a programe to write a number 100,98,96,94.....0
create a variable 
*/
#include<stdio.h>
void main()
{
 int number =100;
    while(number<= 0)
    {
        printf("%d",number);
        number= number -2;

    }
   printf("\n bye");
}