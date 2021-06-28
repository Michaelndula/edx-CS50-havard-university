#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int Validate1(int argc);
int Validate2(string argv);
void Cypher(string x);
void KeyCalc(string argv);

string MESSAGE;
int LENGTH;
int *KEY;
int COUNTER = 0;

int main(int argc, string argv[])
{
    //Check if right amount of arguments are supplied
    int Val1 = Validate1(argc);

    if (Val1 == 0)
    {
        //Check if argument is a string of chars
        int Val2 = Validate2(argv[1]);

        if (Val2 == 0)
        {
            //get the string length
            LENGTH = strlen(argv[1]);

            //Dynamically update KEY array length
            KEY = (int *)malloc(LENGTH * sizeof(*KEY));
            if (KEY == NULL)
            {
                fprintf(stderr, "malloc failed\n");
            }

            //calculate the key
            KeyCalc(argv[1]);

            //get the message from the user to be encrypted
            MESSAGE = get_string("plaintext: ");
            printf("ciphertext: ");

            //encrypt message from user
            Cypher(argv[1]);
            free(KEY);
            return 0;
        }
        else
        {
            //validation failed
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
    else
    {
        //validation failed
        printf("Usage: ./vigenere keyword\n");
        return 1;
    }
}

//Validate the number of arguments supplied
int Validate1(int argc)
{
    if (argc != 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//Validate the argument is a string
int Validate2(string argv)
{
    int k = 0;

    //loop through all characters in argument line string and check if alphabetic
    for (int i = 0; i < LENGTH; i++)
    {
        if isalpha(argv[i])
        {
            //Do Nothing
        }
        else
        {
            k++;
        }
    }

    //k counts the number of non-alphabetic characters, so if > 0 then invalid input
    if (k > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


void Cypher(string x)
{
    //identify the length of the message to be coded
    int Mlength = strlen(MESSAGE);

    //identify the length of the key
    int Slen = strlen(x);

    //cycle through all characters in message supplied by user
    for (int i = 0; i < Mlength; i++)
    {
        // loop through key
        if (COUNTER > Slen - 1)
        {
            COUNTER = 0;
        }
        //check if the character is alphabetic
        if (isalpha(MESSAGE[i]))
        {
            //convert the character to ASCII int value
            char l = MESSAGE[i];

            //add key value to message value and wrap around ascii mapping
            if (isupper(MESSAGE[i]))
            {
                l = l + KEY[COUNTER];
                if (l > 'Z')
                {
                    l = l - 26;
                }
            }
            else
            {
                l = l + KEY[COUNTER];
                if (l > 'z')
                {
                    l = l - 26;
                }
            }

            //convert value back into character and store in array
            MESSAGE[i] = (char) l;
            // print character
            printf("%c", MESSAGE[i]);
            COUNTER++;
        }
        else
        {
            //character is 'numeric' or 'symbol' or 'space' just display it
            printf("%c", MESSAGE[i]);
        }
    }
    printf("\n");
}

void KeyCalc(string argv)
{
    //convert key entry to values A/a = 0 to Z/z = 26
    for (int i = 0; i < LENGTH; i++)
    {
        char k = argv[i];
        if (islower(argv[i]))
        {
            KEY[i] = k - 'a';
        }
        else
        {
            KEY[i] = k - 'A';
        }
    }
}
