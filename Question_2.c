#include <stdio.h>
int main(void) 
{
    int x, y;
    printf("Input the value of x: ");
    scanf("%d", &x);
    printf("Input value of y: ");
    scanf("%d", &y);
    int sum = (x + y);
    printf("The sum of %d and %d is %d\n", x, y, sum);
    int product = (x * y);
    printf("The product of %d and %d is %d\n", x, y, product);
    int difference = (x - y);
    printf("The difference of %d and %d is %d\n", x, y, difference);
    int quotient = (y != 0) ? (x / y) : 0;
    printf("The quotient of %d and %d is %d\n", x, y, quotient);
    return 0;
}