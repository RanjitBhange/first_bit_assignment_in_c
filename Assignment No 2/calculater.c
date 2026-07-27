#include<stdbool.h>
void main()
{
    int num1=10;
    int num2=20;
    char charr='+';
    if (charr=='+')
    {
        printf("addition : %d",num1+num2);
    }
    else if (charr=='-')
    {
       printf("substraction : %d",num1-num2); 
    }
    else if (charr=='*')
    {
        printf("multiplication : %d",num1*num2);
    }
    else            
    {
        printf("division : %f",(float)num1/num2);
    }
    
    
    
    
}