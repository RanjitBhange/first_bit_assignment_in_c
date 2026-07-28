#include<stdio.h>
void main()
{
    int n=4;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if ( row==1 || col==1 || row==n || col==n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
        
    }
    
}