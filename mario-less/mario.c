#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        //prompt user
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    //looping
    for (int i = 0; i < h; i++)
    {
        //adding spaces
        for (int m = 0; m < h - i - 1; m++)
        {
            printf(" ");
        }

        // making hashs
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}