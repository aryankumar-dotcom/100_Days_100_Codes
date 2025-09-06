#include <stdio.h>
int main ()
{
    int radius;
    printf ("Enter the value for radius: ");
    scanf ("%d",&radius);
    float pi = 3.14159;
    float area = pi*radius*radius;
    printf ("The area of the circle is: %.4f\n",area);
    float circumference = 2*pi*radius;
    printf ("The circumference of the circle is: %.4f\n",circumference);
    return 0;
}