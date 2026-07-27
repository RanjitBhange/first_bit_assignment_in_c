#include<stdio.h>
void main()
{
    int price;
    char choice;
    float discount;
    int actualprice;
    printf("enter a price : ");
    scanf("%d",&price);
    printf("you are a student yes or no : ");
    scanf(" %c",&choice);
    
    if (choice=='y' || choice=='Y')
    {
        
        if (price>500)
        {
           discount=price*(20.0/100);
           actualprice=price-discount;
           printf("the price after discount : %d",actualprice);
        }
        else
        {
            discount=price*(10.0/100);
           actualprice=price-discount;
           printf("the price after discount : %d",actualprice);

        }
        
    }
    else if (choice=='n' || choice=='N')
    {
        if (price>600)
        {
            discount=price*(15.0/100);
           actualprice=price-discount;
           printf("the price after discount : %d",actualprice);
        }
        else
        {
            printf("no discount the price : %d",price);
        }
        
    }
    
    
}