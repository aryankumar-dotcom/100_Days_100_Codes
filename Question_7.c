#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter the value for X: ");
    scanf ("%d",& x);
    printf ("Enter the value for Y: ");
    scanf ("%d",& y);

    x=x+y;
    y=x-y;
    x=x-y;

    printf ("After swapping the value of X is: %d\n", x);
    printf  ("After swapping the value of Y is: %d", y);
    return 0;
}