/*
    write a program to calculate bmi and display obesity level of person from given height
    (foot and inch) and weight.

*/
#include<stdio.h>
void main()
{
    int foot,inch;
    float hight,weight,meter,inch_1,bmi;

    printf("\n lets count your bmi");


    printf("\n enter your weight(kg)");
    scanf("%f",&weight);

    printf("\n enter you hight");
    printf("\n  foot");
    scanf("\n%d",&foot);
    printf("\n enter your inch");
    scanf("\n %d",&inch);
    
    
    inch_1= foot * 12 + inch;
    meter = inch_1 * 2.54 / 100;
    hight = meter;
    bmi = weight / (hight * hight);

    printf("\n enter your date");
    printf("\nweight=%2.f\n foot=%d\ninch=%d\nbmi=%1.f",weight,foot,inch,bmi);

    if(bmi>=35)
    {
        printf("\n try next time");

    }
  else if(bmi>=34.9)
  {
    printf("\n the weight is over weigt");

  }
  else if(bmi>=30)
  {
    printf("\n the weight is normal");
    
    printf("\nobese");
  }

  else if(bmi>=18)
    {
        printf("\nunder weight");
    }
    else 
    {
        printf("\nover light weight");
    }
     printf(" the all the best bro");
}