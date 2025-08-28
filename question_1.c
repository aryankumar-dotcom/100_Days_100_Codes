#include <stdio.h>
int main ()
{
    int x,y;
    printf ("Enter the value for x: ");
    scanf ("%d",&x);
    printf ("Enter a value for y :");
    scanf ("%d",&y);
    int sum;
    sum = x +y;
    printf ("The sum of your two numbers is: %d",sum);
    return 0;
}