#include<stdio.h>
void main()
{
    int num=121;
    int no;
    int r1,r2,r3;
    r1=num%10;
    no=num/10;
    r2=no%10;
    r3=no/10;
    int reverse=(r1*100)+(r2*10)+(r1);
    if (num==reverse)
    {
        printf("number is palindrom");
    }
    else
    printf("number is not palindrom");
    
}