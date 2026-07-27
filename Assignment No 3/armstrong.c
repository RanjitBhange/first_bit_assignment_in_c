#include<stdio.h>
void main()
{
    int num=153;
    int r1,r2,r3,n;
    int i=1;
    n=num/10;
    r1=num%10;
    // printf("%d ",r1);
    r2=n%10;
    // printf("%d ",r2);
    r3=n/10;
    // printf("%d ",r3);
    int a,b,c;
    int res;
    a=r1*r1*r1;
    // printf("%d",a);
    b=r2*r2*r2;
    // printf("%d",b);
    c=r3*r3*r3;
    // printf("%d",c);
    res=a+b+c;
    // printf("%d",res);
    if (num==res)
    {
        printf("armstrong number ");
    }
    else
    printf("not armstrong number ");
    


    
    
}