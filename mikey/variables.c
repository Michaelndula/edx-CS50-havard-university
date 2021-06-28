#include <stdio.h>

int main()

{
   char ch = 'F';
   char str[50] = "mike is learning how to code";
   float flt =50.479;
   int no = 234;
   double dbl = 42.32154;

   printf("Character is %c \n", ch);
   printf("String is %s \n" , str);
   printf("Float value is %f \n", flt);
   printf("Integer value is %d\n" , no);
   printf("Double value is %lf \n", dbl);
   printf("Octal value is %o \n", no);
   printf("Hexadecimal value is %x \n", no);

   return 0;
}