#include <stdio.h>

// function for addition
int addition(int a, int b)
{
    int result = a + b;
    printf("Your answer is: %d", result);
}

// function for subtraction
int subtraction(int a, int b)
{
    int result = a - b;
    printf("Your answer is: %d", result);
}

// function for multiplication
int multiplication(int a, int b)
{
    int result = a * b;
    printf("Your answer is: %d", result);
}

// function for division
int division(int a, int b)
{
    if (b == 0)
    {
        printf("Cannot divide by zero");
    }
    else
    {
        int result = a / b;
        printf("Your answer is: %d", result);
    }
}

int main()
{

    printf("Welcome to Joy Calculator \n \n");

    int a;
    int b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\n");

    int choice;
    printf("Choose which operation you want to perform, enter the operation number\n \n");
    printf("\t1. Addition \n \t2. Subtraction \n \t3. Multiplication \n \t4. Division \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        addition(a, b);
        break;
    case 2:
        subtraction(a, b);
        break;
    case 3:
        multiplication(a, b);
        break;
    case 4:
        division(a, b);
        break;
    default:
        printf("Invalid choice");
    }
    return 0;
}
