#include<stdio.h>
#include<conio.h>
void main()
{
  int a=11,b=20,c=1;
  if (a==b && b==c )
  {
    printf("equilateral");
  }
  else if (a==b && a!=c || a==c && a!=b || b==c && b!=c  )
  {
    printf("isocelas");
  }
  else
  printf("scalene");
  
}