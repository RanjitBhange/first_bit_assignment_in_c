#include<stdio.h>
void main()
{
    int num=5;
    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= num; col++)
        {
            if (col>=row)
            {
                printf("* ");
            }
            
        }
        printf("\n");
        
    }
    
}