#include<stdio.h>
void main()
{
    int num1=100;
    int num2=400;
    int num3=3000;
    if (num1>num2 && num1>num3)
    {
        printf("%d",num1);
        
    }
    else if(num2>num1 && num2>num3)
    {
       printf("%d",num2); 
    }
    else
    printf("%d",num3);
    
    
    
}