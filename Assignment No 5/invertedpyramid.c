#include<stdio.h>
void main()
{
    
    int num=5;
    for (int  row = 1; row <= num; row++)
    {
        for (int  col = 1; col <= num; col++)
        {
            if (row==col || row<col)
            {
                printf("* ");

            }
            else
            {
                printf(" ");
            }
            
            
        }
        printf("\n");
        
    }
    
}