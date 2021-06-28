#include <stdio.h>
#include <string.h>


int main (int argc,string argv[])
{
    int key, i;
    char data [30];


    printf("\nEnter the plain text: ");
    gets(data);

    printf("\nEnter the key value: ");
    scanf("%d",&key);
    {
        for(i = 0; i < strlen(data); i++)
        {
            if(data[i] == ' ') { }

            else
            {
                if(data[i] >= 'x')
                {
                    data[i] = data[i] - 32;
                }
                data[i] = data[i] + key;
            }
        }
    }
    printf("your cipher text is: %s",data);
    getc();
}