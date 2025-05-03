/*
write a programe to convert 24 hours format into 12 hours format 
steps______________________________
1 = create variable into hours 
2 = accept time into hours variable 
3 = check if time is above 11
    if hours<12
    display hours with  AM message

    if hours>11
    dispaly hours with pm message 
         hours = hours - 12(3)

4 = display good bye
*/
 #include<stdio.h>
 void main()
 {
    float hours;
    printf("enter ypur hours");
    scanf("%f",&hours);

    if(hours<12)
    {
     printf("%.2f AM",hours);
    }

    if(hours>11)
    {
        printf("%.2f PM",hours);

    }




 }