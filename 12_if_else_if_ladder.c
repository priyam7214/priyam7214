/*


    write a program to accept monthly income from user and then calculate annual gross income, net come and tax amount as per below income tax rule
    From Rs. 12,00,001 to Rs. 16,00,000	15%
    From Rs. 16,00,001 to Rs. 20,00,000	20%
    From Rs. 20,00,001 to Rs. 24,00,000	25%
    Above Rs. 24,00,001	30%

    steps 
    1 - create variable income,gross_income,tax,net_come 
    2 - accept month income from user into income 
    3 - calculate annual income 
        gross_income = income * 12
    4 - calculate income tax 
        4.1 if(gross_income>=24,00,001)
                tax = gross_income * 0.30
        4.2 else if(gross_income>=20,00,001)
                tax = gross_income * 0.25
        4.3 else if(gross_income>=16,00,001)
                tax = gross_income * 0.20
        4.4 else if(gross_income>=12,00,001)
                tax = gross_income * 0.15
        4.5 otherwise 
                tax = 0;
    5 - calculate net income 
            net_income = gross_income - tax 
    6   display gross_income tax and net income
*/
#include <stdio.h>
void main()
{
    float monthly_income,gross_income,tax = 0, net_income;
    printf("\n enter month income");
    scanf("%f",&monthly_income);

    gross_income = monthly_income*12;
   
    if (gross_income>240000)
    {
        tax = gross_income*0.30;
    }
    else if(gross_income>200000)
    {
        tax = gross_income*0.25;
    }
    else if(gross_income>160000)
    {
        tax = gross_income*0.20;
    }
    else if(gross_income>120000)
    {
        tax = gross_income*0.15;
    }
    else
    {
        tax = 0;
    }

    net_income = gross_income - tax;

    printf("gross income :- RS.%.2f\n",tax);
    scanf("GST tax amount :- RS.%.2f\n",tax);
    printf("net annual income :- rs.%.2f\n",net_income);
    printf("thank you");
}