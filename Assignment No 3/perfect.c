#include<stdio.h>
void main()
{
    int temp=0;
    int num=28;
    int i=1;
    while (i<num)
    {
        if (num%i==0)
        {
           temp=temp+i; 
        }
        i++;
    }
    if (num==temp)
    {
        printf("Number is Perfect");
    }
    else
    {
        printf("Number is not Perfect");
    }
    
    
}