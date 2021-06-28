#include <stdio.h>
#include <cs50.h>


bool move(int tile)
{
    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (tile == board[i][j])
            {
                tile = board[i][j];

                int tileleft = board[i][j-1];
                int tileright = board[i][j+1];
   // int tileup = tile - 4;
  //  int tiledown = tile + 3;
                if (tileleft == 0)
                {
                    tileleft = tile;
                    tile = 0;
                    return true;
                }
                else if (tileright == 0)
                {
                    tileright = tile;
                    tile = 0;
                    return true;
                }
            }
        }
    }
return false;
}