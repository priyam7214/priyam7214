// Write a programe to findout which day it is based on user given input 
#include<stdoio.h>
void main()
{
    int number,0;
    printf("enter the value of number");
    scanf("%d"&number);


    printf("\n enter yhe value of number is:%d",number);//1-7
    
 // if(number == 1 ){
    //     printf("It is sunday ");
    // }
    // else if(number == 2){
    //     printf("It is monday ");
    // }
    // else{
    //     printf("It is not a valid day ");
    // }

 
    sitch(number)
    {
        case 1:
        printf("it is sunday");
        
        break;

        case 2 :
        printf("it is monday");

        break;

        case 3 :
        printf("it is tuesday");

        break;

        case 4 :
        printf("it is wensday");

        break;

        case 5 :
        printf("it is thursday");

        break;

        case 6 :
        printf("it is friday");

        break;

        case 7 :
        printf("it is saturday");

        break;

        default:
        printf("number is not valid day");
         break;
    }


}
