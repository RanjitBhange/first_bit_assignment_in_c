#include<stdio.h>
void main()
{
   
    float DA,TA,HRA;
    int Bsalary=80000;
    int total;
    if (Bsalary<=5000)
    {
        DA=(Bsalary)*(10.0/100);
        
        TA=Bsalary*(20.0/100);
        HRA=Bsalary*(25.0/100);
        total=Bsalary+DA+TA+HRA;
        printf("Total salary : %d",total);
    }
    else
    {
      DA=(Bsalary)*(15.0/100);
        
        TA=Bsalary*(25.0/100);
        HRA=Bsalary*(30.0/100);
        total=Bsalary+DA+TA+HRA;
        printf("Total salary : %d",total);  
    }
    
}