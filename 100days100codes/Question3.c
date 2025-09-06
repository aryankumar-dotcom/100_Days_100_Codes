#include <stdio.h>
int main()
{
    int length,breadth;
    printf ("Enter the value for length: ");
    scanf ("%d",&length);
    printf ("Enter the value for breadth: ");
    scanf ("%d",&breadth);
    int area;
    area = length*breadth;
    printf ("The area of the rectangle is: %d\n",area);
    int perimeter;
    perimeter = 2*(length+breadth);
    printf ("The perimeter of the rectangle is: %d\n",perimeter);
    return 0;
}