#include <stdio.h>


// Function for additing two numbers
void addition(long int no1,long int no2)
{
    printf("%ld", no1 + no2);
}

int main()
{
    // Taking input from user

    printf("Enter number 1 for further operation:\n");
    long int no1;
    scanf("%ld", &no1);

    long int no2;
    printf("Enter number 2 for further operation:\n");
    scanf("%ld", &no2);

    addition(no1,no2);

    return 0;
}