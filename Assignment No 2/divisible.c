#include<stdio.h>
void main()
{
    int num=30;
    if (num%3==0 && num%5==0)
    {
        printf("divisible by 3 or 5");
    }
    else if (num%3==0)
    {
        printf("divisible by 3");
    }
    else if (num%5==0)
    {
       printf("divisible by 5");
    }
    else
    printf("not divisible");
    
   
    
}