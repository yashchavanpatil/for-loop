#include<stdio.h>

void main()
{
    int i, distance;

    clrscr();

    for(i = 1; i <= 5; i++)
    {
        printf("Enter distance reading %d: ", i);
        scanf("%d", &distance);

        printf("Sensor reading = %d cm\n", distance);
    }

    getch();
}