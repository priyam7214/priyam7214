/*
1 = creat variable num amd cube
2 = accept input from and storien into numbe(p/s)
    check if num is possitive or not
    if num<0-10
    convert is to possitive num 
     num=0-num 0-10
     _____else 
     display not already positive num
     qube=num*num*num
     display in qube
    

*/
#include<stdio.h>
void main()
{
    int number,qube;
    printf("enter number");
    scanf("%d",&number);
    if(number<0)
    {
        number = 0 - number;
        printf("this number a nagitive conver to possitive");
    

    }
    else

    
    {
         printf("not already positive number");

    }
    qube=number*number*number*
    printf("\nqube=%d",qube);



}