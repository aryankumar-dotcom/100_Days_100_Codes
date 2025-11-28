#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Number is positive.\n");
    } 
    else {
        if (number < 0) {
            printf("Number is negative\n");
        }
        else {
            printf("Zero\n");
        }
    }
    return 0;
}