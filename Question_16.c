#include <stdio.h>
int main(){
    float x, y, z;
    
    printf ("Enter the first number: \n");
    scanf ("%f",& x);
    printf ("Enter the second number: \n");
    scanf ("%f",& y);
    printf ("Enter the third number: \n");
    scanf ("%f",& z);

    if (x >= y && x >= z){
        printf ("largest number is %f\n", x);
    }
    if (y >= x && y >= z) {
        printf ("Largest number is %f\n", y);
    }
    else {
        printf ("Largest number is %f\n", z);
    }
    
    return 0;
}