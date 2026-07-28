#include <stdio.h>
void isevenodd(int no);
void isprime(int no);
void ispalindrome(int no);
void isposneg(int no);
void reverse(int no);
void sum(int no);

int main()
{
    while (1)
    {

        int no;
        int choice;
        printf("\nEnter number : ");
        scanf("%d", &no);
        printf("Press\n1.To check number is even or odd.");
        printf("\n2.To check number is prime or not.");
        printf("\n3.To check number is pallindrome or not.");
        printf("\n4.To check number is positive, negative or zero.");
        printf("\n5.To reverse a number.");
        printf("\n6.To find sum of digits.");
        printf("\n7.Exit");
        printf("\nenter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            isevenodd(no);
            break;
        case 2:
            isprime(no);
            break;
        case 3:
            ispalindrome(no);
            break;
        case 4:
            isposneg(no);
            break;
        case 5:
            reverse(no);
            break;
        case 6:
            sum(no);
            break;
        case 7:
            return 0;
            break;

        default:
            printf("\ninvalid choice");
        }
        // isevenodd(no);
        // isprime(no);
        // ispalindrome(no);
        // isposneg(no);
        // reverse(no);
        // sum(no);
    }
}
void isevenodd(int no)
{
    if (no % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}

void isprime(int no)
{

    int count = 0;
    int i = 2;
    while (i < no)
    {
        if (no % i == 0)
        {
            count++;
            break;
        }
        i++;
    }
    if (count == 0 && no > 1)
    {
        printf("number is prime");
    }
    else
    {
        printf("number is not prime");
    }
}


void ispalindrome(int no)
{

    int num;
    num=no;
    int number;
    number=num;
    int n;
    int temp=0;
    int i=0;
    while (num!=0)
    {
       n=num%10;
       if (i==0)
       {
        temp=n;
       }
       else
       {
        temp=temp*10;
        temp=temp+n;
        
       }
       num=num/10;
       i++;
       
    }

    if (number==temp)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
}

void isposneg(int no)
{
    if (no > 0)
    {
        printf("number is positive");
    }
    if (no < 0)
    {
        printf("number is negative");
    }
    if (no == 0)
    {
        printf("number is zero");
    }
}

void reverse(int no)
{
    int i = 0;
    int temp = 0;
    int number = no;
    int n = no;
    int sum = 0;
    int j = 0;
    int count = 0;
    int tem = 0;
    while (n != 0)
    {
        tem = n % 10;
        n = n / 10;
        j++;
    }

    while (i < j)
    {
        temp = no % 10;

        if (i == 0)
        {
            temp = temp * 100;
        }
        else if (i == 1)
        {
            temp = temp * 10;
        }

        sum = sum + temp;

        no = no / 10;
        i++;
    }
    printf("the reverse number is %d", sum);
}

void sum(int no)
{
    int sum = 0;
    int temp = 0;
    while (no != 0)
    {
        temp = no % 10;
        sum = sum + temp;
        no = no / 10;
    }
    printf("the sum is %d", sum);
}
