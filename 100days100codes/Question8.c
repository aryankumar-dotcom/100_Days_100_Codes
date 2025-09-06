#include <stdio.h>
int main ()
{
    int n,sum = 0;
    printf ("Enter the number of integers you want the sum of: ");
    scanf ("%d",&n);
    sum = n * (n+1)/2;
    printf ("The sum of the integers are: %d",sum);
    return 0;
}