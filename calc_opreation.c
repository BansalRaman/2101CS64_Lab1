#include <stdio.h>

// Function for addition for two numbers
void addition(long int no1,long int no2)
{
    printf("%ld", no1 + no2);
}

// Function for subtracton of two numbers
void subtraction(long int no1,long int no2)
{
    printf("%ld", no1 - no2);
}

int main(void)
{
    // Taking input from user

    printf("Enter number 1 for further operation :\n");
    long int no1;
    scanf("%ld", &no1);

    long int no2;
    printf("Enter number 2 for further operation :\n");
    scanf("%ld", &no2);

// Asking user that which operation he want to perform

    printf("Enter code of the operation needed:\n 1. Add \t 2. Subtract \n");
    int check;
    scanf("%d", &check);

    switch (check)
    {
    case 1:
        addition(no1, no2);
        break;
    case 2:
        subtraction(no1, no2);
        break;
    }
}