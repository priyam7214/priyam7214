 /*
    write a program to findout which stock will give better return in terms dividend per 100 Rs from given 2 stock's market price and last year dividend.
    ______________________________________________________________________________.....
    steps
    1 = creat variyebles.
    2 = tack share and dividend value from user.
    3 = creat logic for counting dividend and more.
    4 = displaying all result
*/
#include<stdio.h>
void main()
{
    float return1,return2,dividen1,dividen2,price1,price2;
     printf("enter 1st share amount");
     scanf("%f",&price1);

     printf("\n enter last year dividen 1st share amount");
     scanf("%f",&dividen1);

     printf("enter 2nd share amount");
     scanf("%f",&price2);

     printf("\n enter last year dividen 2nd share amount");
     scanf("%f",&dividen2);

     return1= (dividen1/price1) * 100;
     return2= (dividen2/price2) * 100;

     if(return1>return2)
     {
        printf("\n 1st share is better than 2nd share");
        scanf("\n return per rs.100 = %f",return1);

     }
     else
     {
        printf("\n 2nd share is better than 1st share");
        scanf("\n return per rs.100 = %f",return2);
    
     }
     printf("\n thank you for visit");


}