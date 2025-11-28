#include <stdio.h>
int main()
{
    int length, breadth;
    printf("Input the length of the rectangle: ");
    scanf("%d", &length);
    printf("Input the breadth of the rectangle: ");
    scanf("%d", &breadth);
    int area = length * breadth;
    printf("The area of the rectangle is: %d\n", area);
    int perimeter = 2 * (length + breadth);
    printf("The perimeter of the rectangle is: %d\n", perimeter);
    return 0;
}