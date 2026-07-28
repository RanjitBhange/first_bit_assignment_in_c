#include<stdio.h>
void main()
{
    int n=4;
    int k=1;
    for (int row = 1; row <= n ; row++)
    {
        
        for (int col = 1; col <= n ; col++)
        {
            if (col<=row)
            {
                printf("%d ",k);
                k++;
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
        
    }
    
}