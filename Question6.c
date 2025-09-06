#include <stdio.h>
int main ()
{
    int x,y,z;
    printf ("Please enter a value for x: ");
    scanf ("%d",&x);
    printf ("Please enter a value for y: ");
    scanf ("%d",&y);
    z = x;
    x = y;
    y = z;
    printf ("After swapping, The value of x is: %d\n",x);
    printf ("After swapping, The value of y is: %d\n",y);
    return 0;
}