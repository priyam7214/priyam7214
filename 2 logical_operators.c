/*
    concept of logical operators
    logical operators.
    logical operators are used to combine two or more relational expressions. there are 3 logical operators
         for example
         a < b b > c
        1) and operator (&&)
            and operators check both relational expressions. if both expressions are true(1) it return true(1) otherwise it return false(0)
        2) or operator (||)
            or operators check both relational expressions. if any one of the expressions are true(1) it returns true(1) otherwise it returns false.
        3) not operator (!)
            not operator reverse result of any relational expressions. if relational is true it returns false. if relational expressions false it return true
*/
#include<stdio.h>
void main()
{
    int a = 100;
    int b = 200;
    int c = 300;
    int result;

    //&& or ||
    result = a < b && b < c; // 100<200(1) && 200<300(1)
    printf("%d %d<%d && %d<%d",result,a,b,b,c);
0
    result = a < b || b > c; // 100<200(1) || 200>300(0)
    printf("\n%d %d<%d && %d<%d",result,a,b,b,c);

    result = a > b || b > c; // 100>200(0) || 200>300(0)
    printf("\n%d %d>%d && %d<%d",result,a,b,b,c);

    result = !(a == b); //!100 == 20;
    printf("\n%d = !(%d == %d)",result,a,b);

}