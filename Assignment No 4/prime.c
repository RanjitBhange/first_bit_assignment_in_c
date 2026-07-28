#include<stdio.h>
void main()
{
  int num;
  printf("enter number :");
  scanf("%d",&num);
  int flag=0;
  for (int i = 2; i < num/2; i++)
  {
    if (num%i==0)
    {
      flag=1;
      break;
    }
    
  }
  if (flag==0)
  {
    printf("number is prime");
  }
  else
  {
    printf("number is not prime");
  }
  
  
}