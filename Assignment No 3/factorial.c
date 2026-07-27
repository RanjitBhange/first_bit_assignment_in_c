#include<stdio.h>
void main()
{
    int num=5;
    int i=1;
    int temp=1;

    while (i<=num)
    {
       temp=temp*i; 
       i++;
    }
    printf("%d",temp);
    
}