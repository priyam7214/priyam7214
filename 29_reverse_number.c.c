/*
write a programe to display below reverse number printf statment)
input : 1234 output 4321
    steps
    ------------------------------------------
    1)  create variable number, reminder, reverse  =0
    2)  accept input into number(1234)
    
    3)  get last digit 
        reminder(4) = number % 10 
    4)  add reminder into reverse 
        reverse(4) = (reverse * 10) + reminder
    5)  number(123) = number / 10 123
    
    6)  reminder(3) = number % 10 
    7)  reverse 43 = (reverse * 10) + reminder
    8)  number(12) = number / 10 1
    
    9)  reminder(2) = number % 10 
    10) reverse 432 = (reverse * 10) + reminder
    11) number(1) = number / 10
*/
#include<stdio.h>
void main()
{
    int number,reminder,reverse=0,count;
    printf("number");
    scanf("%d",&number);
    for(count=0;number>0;count++)
    {
        reminder = number %10;

                            
    reverse=(reverse * 10)+reminder;
    number = number / 10;




    }
    
    printf("%d",reverse);

}
