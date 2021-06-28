#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Get input from the user
    //The user should input atleast two integers
    int firstint = get_int ("firstint: ");
    int secondint= get_int ("secondint: ");

   //compare the integers
   if (firstint == secondint)
   //if the integers are the same your compiler will print "same"
   {
       printf("Equal\n");
   }
   else
   //if the integers are not the same your compiler will print "Not the same"
   {
       printf("Not Equal\n");
   }


}