#include <stdio.h>
void main()
{
    int no;
    printf("Enter Number : ");
    scanf("%d",&no);
    int copy = no;
    int n = 0;
    int num = no;
    int temp = 1;
    int count = 0;
    int op = 0;
    while (copy != 0)
    {
        n = copy % 10;
        copy = copy / 10;
        count++;
    }

    // printf("%d",count);

    for (; no != 0;)
    {
        temp = no % 10;
        n = temp;
        for (int j = 1; j < count; j++)
        {
            temp = temp * n;
        }

        op = op + temp;
        no = no / 10;
    }
       if (num==op)
       {
        printf("Number is armstrong");

       }
       else
       printf("number is not armstrong");
}