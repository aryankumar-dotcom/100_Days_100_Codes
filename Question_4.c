#include <stdio.h>
int main()
{
    int radius;
    printf("Input the radius of the circle: ");
    scanf("%d", &radius);
    float area = 3.14 * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
    float circumference = 2 * 3.14 * radius;
    printf("The circumference of the circle is: %.2f\n", circumference);
    return 0;
}