#include<stdio.h>
void main()
{
    int num=7;
    int i=2;
    int res=0;
    
    while (i<num)
    {
       if (num%i==0)
       {
        res=1;

        break;
       }
       
       i++;  
    }
    if (res)
    {
        printf("not prime");
    }
    else
            printf("prime");

    

    
}