/*
 create a variable purchasing and sales the prize
1  if purchase prize< sales
2  then  dispaly profit 
3  if purchase prize > sales
4  then display loss
5  if purchase prize == sales 
6  then display equal
*/

#include<stdio.h>
void main()
{
float purchase_prize,sales_prize;
printf("plz enter the value of purches the prize");
scanf(" %f",&purchase_prize);

printf ("plz enter the valu of sales prize");
scanf ("%f",&sales_prize);

if (purchase_prize < sales_prize)
{
    printf ("profit");

}
if (purchase_prize > sales_prize)
  {
    printf ("loss_prize");

}