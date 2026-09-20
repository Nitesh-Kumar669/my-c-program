#include <stdio.h>

int main()
{
    int w, x, y, z;

    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &w, &x, &y, &z);

    if (w > x)
    {
        if (w > y)
        {
            if (w > z)
                printf("w is greatest");
            else
                printf("z is greatest");
        }
        else
        {
            if (y > z)
                printf("y is greatest");
            else
                printf("z is greatest");
        }
    }
    else
    {
        if (x > y)
        {
            if (x > z)
                printf("x is greatest");
            else
                printf("z is greatest");
        }
        else
        {
            if (y > z)
                printf("y is greatest");
            else
                printf("z is greatest");
        }
    }

    return 0;
}