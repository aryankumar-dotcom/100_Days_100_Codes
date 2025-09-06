#include <stdio.h>
int main()
{
    int x,y;
    printf ("Enter a value for x: ");
    scanf ("%d",&x);
    printf ("Enter a value for y: ");
    scanf ("%d",&y);
    int sum, product, difference;
    sum = x+y;
    printf ("The sum of your two numbers are: %d\n",sum);
    if(x>y)
    {
        difference = x-y;
    }
    else
    {
        difference = y-x;
    }
    printf ("The difference of your two values are: %d\n",difference);
    // for finding the quotient of the two numbers
    float quotient;
    if (y==0)
    {
        printf ("Division by 0 is undefined");
    }
    else
    {
        quotient = (float)x/y;
    }
    printf ("The quotient of your two values are: %f",quotient);
    return 0;
}