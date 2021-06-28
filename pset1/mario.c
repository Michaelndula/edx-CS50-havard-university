//Libraries
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //print prompt
    printf("lets build a pyramid!\nit should be one to eight steps high.\nHow tall should it be?\n");
    {
        //ask user for input
        int Height;

        do
        {
            Height = get_int("Height: ");
        }
        //if user input doesn't match the users input it will return to true and goes up to do untill it returns to false
        while (Height < 0 || Height > 8);

        //once the input is passed print this

        printf("ok your Height is %i.\n\n", Height);
        {
            //Now we make the pyramid
            //loop to make a certain number of rows refernce to height for that number and adds one to int rows untill it marches int height
            for (int rows = 0; rows < Height; rows++)
            {
                //loop that reference Height bcoz thats the max,reference rows bcoz thats what changes
                for (int spaces = Height - rows ;spaces > 0;spaces--)
                {
                    //print the spaces
                    printf(" ");
                }
                //loop that doesn't need to reference Height for the max number bcoz thats what rows does just needs to change as rows changes
                for (int bricks = -1; bricks < rows; bricks++)
                {
                    //print the harshes
                    printf("#");
                }
                //new line
                printf("\n");
            }
        }
    }
}