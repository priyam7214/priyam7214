/*
write programe to number of 1 , 8 , 27 , 64 ,125....1000
1 = create a variable nmuber
2 = display number
3 = number = number *number*number
4 = print number
*/
#include<stdio.h>
void main()
{
    int number=0,q;
    while(number<=9)
    {
        number = number +1;
        
        q= number*number*number;
        printf("%d",q);
    }
    
    
        
    
    printf("\n nice");

}
