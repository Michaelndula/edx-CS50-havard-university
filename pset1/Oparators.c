#include <stdio.h>

int main (void)
{
    int a = 50, b = 20;

    int addition,subtraction,multiplication,division,modulus,increment,decrement;

    addition = a + b;
    subtraction = a - b;
    multiplication = a * b;
    division = a / b;
    modulus = a % b;
    increment = a++;
    decrement = b--;


    printf("addition of a & b is: %d\n",addition);
    printf("subtraction of a & b is: %d\n",subtraction);
    printf("multiplication of a & b is: %d\n",multiplication);
    printf("division of a & b is: %d\n",division);
    printf("remainder of a & b is: %d\n",modulus);
    printf("a has increased to: %d\n",increment);
    printf("b has decreased to: %d\n",decrement);

}