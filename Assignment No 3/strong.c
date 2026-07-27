#include <stdio.h>
void main()
{
    int num = 145;
    int n;

    int temp1 = 0;
    int no;
    no = num;

    while (num != 0)
    {
        n = num % 10;
        int temp = 1;
        int j = 1;
        while (j <= n)
        {
            temp = temp * j;

            j++;
        }
        temp1 = temp1 + temp;
        num = num / 10;
    }
    if (temp1 == no)
    {
        printf("Number is Strong");
    }
    else
    {
        printf("Number is not Strong");
    }
}