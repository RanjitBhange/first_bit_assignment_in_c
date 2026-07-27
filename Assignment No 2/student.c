#include<stdio.h>
void main()
{
    int mark=86;
    if (mark>=75)
    {
        printf("distinction");
    }
    else if (mark>=65 && mark<75)
    {
        printf("first class");
    }
    else if (mark>=55 && mark<65)
    {
        printf("second class");
    }
    else if (mark>=40 && mark<55)
    {
        printf("pass class");
    }
    else
    printf("fail");
    
    
    
}