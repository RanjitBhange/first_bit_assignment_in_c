#include<stdio.h>
void main()
{
    int n = 12345;
    int temp=0;
    int i=1;
    int num=0;
    while (n!=0)
    {
        temp=n%10;
        if (i==1 || i==5)
        {
          num=num+temp;  
        }
        n=n/10;
        i++;
        
    }
    printf("%d",num);
    
}