#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);  // Read the number of rows

    // Outer loop for rows (starts from 'a' and goes down to 1)
    for (int r = a; r >= 1; r--)
    {
        // Inner loop for printing stars
        for (int c = 1; c <= r; c++)
        {
            printf("* ");  // Print star with space
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
