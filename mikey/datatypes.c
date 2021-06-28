#include <stdio.h>

int main(void)
{
    //this code contains all data types
     int num = 50;
     char character = 'A';
     float Decimal = 20.55;
     double floot = 100.98765;
     char str[100] = "This code is by mike and Job.";


     printf("Your integer is %d\n",num);
     printf("Your character is %c\n",character);
     printf("Your float is %f\n",Decimal);
     printf("Your double is %lf\n",floot);
     printf("Your sentence is %s\n",str);
     printf("Your octal is %o\n",num);
     printf("Your Hexadecimal is %x\n",num);

return 0;
}