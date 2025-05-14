//write a programe to create to calc
//number1 = 10, number2 = 20
//addition,substrication,multipilaction,division

#include<stdio.h>
void main()
{
int number1=0 , number2=0, option=0 ;
printf("enter the value of number1");
scanf("%d",&number1);
printf("enter the value of number2");
 scanf("%d",&number2); 


printf("\n enter the value of number 1 is %d and number 2 is %d",number1,number2);
printf("\n enter 1 for addition ");
printf("\n enter 2 for substrication");
printf("\n enter 3 for multipilacation");
printf("\n enter 4 for division");
printf("\n select any one option is above");
scanf("%d",&option);

switch(option){
case1 :("the answer is %d",number1 + number2);
break;

case2 : ("the answer is %d",number1 - number2);
break;

case3 : ("the answer is %d",number1 * number2 );
break;

case4 : ("the answer is %d",number1 / number2);
break; 

default :
printf("invalid option selected");
break; 

  }
}   