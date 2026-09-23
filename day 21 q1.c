/*Q41: Write a program to swap the first and last digit of a number.


Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main()
{
    int n, temp, first, last, digits = 0;
    int power = 1, middle;

    scanf("%d", &n);

    temp = n;
    last = temp % 10;

    while (temp >= 10)
    {
        temp /= 10;
        digits++;
        power *= 10;
    }

    first = temp;
    middle = (n % power) / 10;

    int result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}