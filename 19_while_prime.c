/*
    write a program to findout given number is prime number or not

    steps
    ----------------------
    1 create variable number,reminder,divisor
    2 accept input from user into number variable
    3 store 2 into divisor
    4 get reminder by dividing number with divisor
      reminder(1) = number(13) % divisor(2)
    5  if reminder is zero then
        print message number is not prime number
    6  divisor(3) = divisor + 1
    7  get reminder by dividing number with divisor
    reminder(1) = number(13) % divisor(3)
    8  if reminder is zero then
        print message number is not prime number 
    9  divisor (4) = divisor +1

*/
#include<stdio.h>
void main()
{
    int number,divisor,reminder;
    
    printf("enter the number");
    scanf("%d",&number);

    divisor = 2;

    while(divisor<number)
    {
            reminder = number % divisor;
         if(reminder== 0)
         {
         printf("number is not prime");
         break;
         }
         divisor = divisor+1;
        }
        if(divisor== number)
        {
            printf("\n it is prime number");
        }

}