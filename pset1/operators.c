 #include <stdio.h>

 int main( void )
{
       int a;
       int b;

       int sum,subtraction,multiplication,division,modulus,increment,decrement;

          printf( "Enter first integer\n" ); // prompt
          scanf( "%d", &a ); // read an integer

          printf( "Enter second integer\n" ); // prompt
          scanf( "%d", &b ); // read an integer

                sum = a + b;
                subtraction = a - b;
                multiplication = a * b;
                division = a / b;
                modulus = a % b;
                increment = a++;
                decrement = b--;

           printf( "Sum of a & b is: %d\n", sum );
           printf("subtraction of a & b is: %d\n",subtraction);
           printf("multiplication of a & b is: %d\n",multiplication);
           printf("division of a & b is: %d\n",division);
           printf("Remainder of a & b is: %d\n");
           printf("a has increased to: %d\n",increment);
           printf("b has decreased to: %d\n",decrement);


}