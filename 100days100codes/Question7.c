#include <stdio.h>
int main ()
{
    int x,y;
    printf ("Enter a value for x: ");
    scanf ("%d",&x);
    printf ("Enter a value for y: ");
    scanf ("%d",&y);
    
    if (x>y)
    {
        y = x + y;
        x = y - x;
        y = y - x;
    }
    else
    {
        x = x + y;
        y = x - y;
        x = x - y;
    }
    printf ("After swapping, The value of x is: %d\n",x);
    printf ("After swapping, The value of y is: %d",y);
    return 0;
}