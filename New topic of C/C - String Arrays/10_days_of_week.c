// String array for days of the week
#include <stdio.h>

int main()
{
    // Array of weekday names
    char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday",
                     "Friday", "Saturday", "Sunday"};

    printf("Days of the week:\n");
    for (int i = 0; i < 7; i++)
    {
        printf("Day %d: %s\n", i + 1, days[i]);
    }

    return 0;
}