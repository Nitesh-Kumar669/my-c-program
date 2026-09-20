#include <stdio.h>

int main()
{
    int age;
    char day;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter day (W = Weekday, H = Weekend/Holiday): ");
    scanf(" %c", &day);

    if (age < 12||age > 60)
    {
        if (day == 'W')
        {
            printf("Ticket Price = 200");
        }
  else if (day == 'H')
        {
            printf("Ticket Price = 250");
        } 

           else
        {
            printf("Invalid day");
        }
    }


    else
    {
        if (day == 'W')
        {
            printf("Ticket Price = 400");
        }
  else if (day == 'H')
        {
       printf("Ticket Price = 500");
        }

     else
       {
       printf("Invalid day");
        }
          }

    return 0;
}