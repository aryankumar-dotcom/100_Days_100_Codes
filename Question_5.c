#include <stdio.h>
int main ()
{
    float c;
    printf ("Enter temperature in celcius: ");
    scanf ("%f",& c);
    float f;
    f = (c * 9.0/5.0) + 32;
    printf ("The temperature in Farenhite is %.2f", f);
    return 0;
}