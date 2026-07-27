#include<stdio.h>
void main()
{
    int num=121;
    int number;
    number=num;
    int n;
    int temp=0;
    int i=0;
    while (num!=0)
    {
       n=num%10;
       if (i==0)
       {
        temp=n;
       }
       else
       {
        temp=temp*10;
        temp=temp+n;
        
       }
       num=num/10;
       i++;
       
    }

    if (number==temp)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
    
}