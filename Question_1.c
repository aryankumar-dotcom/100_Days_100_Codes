#include <stdio.h>
int main()
{
    int x, y;
    printf("Input the value of x: ");
    scanf("%d", &x);
    printf("Input value of y: ");
    scanf("%d", &y);
    int sum = (x + y);
    printf("The sum of %d and %d is %d\n", x, y, sum);
    return 0;
}