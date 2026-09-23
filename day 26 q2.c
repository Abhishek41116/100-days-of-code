/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/


#include <stdio.h>

int main()
{
    int i, j;

    // Increasing pattern: 1, 3, 5 stars
    for (i = 1; i <= 5; i += 2)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    // Decreasing pattern: 3, 1 stars
    for (i = 3; i >= 1; i -= 2)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}
