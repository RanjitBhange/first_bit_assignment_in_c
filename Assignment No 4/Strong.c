#include <stdio.h>
void main()
{
    int num;
    int n = 0;
    printf("enter number :");
    scanf("%d", &num);
    int no;
   
    no = num;
    int number = 0;
    while (num != 0)
    {
       int fact = 1;
        n = num % 10;
        for (int j = 1; j <= n; j++)
        {
            fact = fact * j;
        }

        number = number + fact;
        num = num / 10;
    }

    if (no == number)
    {
        printf("number is strong");
    }
    else
    {
        printf("number is not strong");
    }
}