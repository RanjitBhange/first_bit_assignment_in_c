#include<stdio.h>
void main()
{
    int no;
    printf("enter a number : ");
    scanf("%d",&no);
    int sum=0;
    for (int i = 1; i < no; i++)
    {
        if (no%i==0)
        {
            sum=sum+i;
        }
        
        
    }
    if (no==sum)
    {
        printf("number is perfect");
    }
    else{
        printf("number is not perfect");
    }
    
    
}