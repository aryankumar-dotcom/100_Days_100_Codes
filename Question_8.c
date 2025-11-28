#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf ("Enter the value for the first 'n' natural numbers: ");
    scanf ("%d",& n);
    for (int i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    printf ("The sum of first 'n' natural numbers are: %d", sum);
    return 0;
}