#include <stdio.h>

int main()
{
    int units, bill;
    char type;

    printf("Enter units: ");
    scanf("%d", &units);

    printf("Enter connection type (D/C): ");
    scanf(" %c", &type);

    if (type == 'D')
    {
        if (units <= 100)
            bill = units * 10;
        else if (units <= 300)
            bill = units * 15;
        else
            bill = units * 20;

        printf("Domestic Bill = %d", bill);
    }
    else if (type == 'C')
    {
        if (units <= 100)
            bill = units * 15;
        else if (units <= 300)
            bill = units * 20;
        else
            bill = units * 25;

        printf("Commercial Bill = %d", bill);
    }
    else
    {
        printf("Invalid connection type");
    }

    return 0;
}




