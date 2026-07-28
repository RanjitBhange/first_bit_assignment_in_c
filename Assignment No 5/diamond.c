#include <stdio.h>

void main()
{
    int n = 4;
    int k = n - 1;
    int count = n + k;

    for (int row = 1; row <= count; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row <= n)
            {
                if (row >= col)
                {
                    printf("* ");
                }
            }
            else
            {
                if (col <= k)
                {
                    printf("* ");
                }
            }
        }

        if (row > n)
        {
            k--;
        }

        printf("\n");
    }
}