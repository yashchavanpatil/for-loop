#include<stdio.h>

void main()
{
    int i, rotations;

    clrscr();

    printf("Enter number of rotations: ");
    scanf("%d", &rotations);

    for(i = 1; i <= rotations; i++)
    {
        printf("Motor rotation %d\n", i);
    }

    getch();
}