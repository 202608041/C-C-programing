#include <stdio.h>

int main()
{
    for(int i=1; i<=6; i++)
    {
        int star;

        if (i<=3)
        star =1;
    else
        star = 7-1;
    for (int j = 1; j<= star; j++)
    {
        printf("*");
    }

    printf("\n");
    }

    return 0;
}
