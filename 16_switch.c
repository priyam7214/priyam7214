/*
write a programe to write number from 1,2,3,4.............100in sequence
1 = create a variable in number
2 = display the first num
3 = nub = nub+1
display the nub 
display the bye
*/
#include<stdio.h>
void main()
{
    int number =1;
    while(number<=100)
    {
        printf("%d",number);
        number= number + 1;

    }
   printf("\n bye");
}    
