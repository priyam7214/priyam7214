/* *
   * *
  *   * 
 *     *
* * * * *
*/
#include<stdio.h>
void main()
{
    int space=1,airstrik=1,row=5;
    while(row>=1)
    {
        while(space<=row) 
        {
          printf(" ");
          space=space+1;  
        }
        while(airstrik<=(6-row))
        {
            printf("*",airstrik);
            airstrik++;
            
            {
                printf(" ");
                


            }
            
            
            
        }
        
    
    }
}