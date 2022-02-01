#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    // promt user for height that is greater than 1 and less than 8
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    // for each row
    for (int row = 0; row < h; row++)
    {
        // initiate a loop for printing spaces
        for (int j = 0; j < h - row - 1; j++)
        {
            // print spaces
            printf(" ");
        }
        // initiate a loop for printing hashes
        for (int t = 0; t < row + 1; t++)
        {
            // Print a hash
            printf("#");
        }
        // add two spaces in between
        printf("  ");

        for (int k = 0; k < row + 1 ; k++)
        {
            printf("#");
        }
        // move to next row
        printf("\n");
    }
}
