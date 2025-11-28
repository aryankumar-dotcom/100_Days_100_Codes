#include <stdio.h>
int main()
{
    int x, y;
    printf ("Enter value for X: ");
    scanf ("%d",& x);
    printf ("Enter the value for Y: ");
    scanf ("%d",& y);

    int z;
    z=x;
    x=y;
    y=z;
    printf ("After swapping the value of X is: %d\n", x);
    printf ("After swapping the value of y is: %d", y);
    return 0;
}