#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;
    do
    {
        dollars = get_float("change owed: ");
    }
    while (dollars < 0);

    int cents = round(dollars * 100);

    int coins = 0;
    int avcoins[] = {25, 10, 5, 1};

    for (int i = 0; i < 4; i++)
        {
            coins += cents / avcoins[i];
            cents = cents % avcoins[i];
        }
        printf("%i\n", coins);
}
