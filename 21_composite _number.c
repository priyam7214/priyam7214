#include<stdio.h>
void main()
{
    int i=2,n;
    printf("enter a number");
    scanf("%d",n);


    if(n<2)
    {
        printf("%d is not composite number");
    }
    while(i<n)
    {
        if(n%i==0)
        printf("%d is composite number");
        break;
    }
    i=i+1;

    
if(i==n)
printf("this is not composite number");
}
