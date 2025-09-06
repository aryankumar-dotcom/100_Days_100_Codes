#include <stdio.h>
#include <math.h>
int main ()
{
    float principal,Rate,rate;
    int time;
    printf ("Enter principle amount: ");
    scanf ("%f",&principal);
    printf ("Enter rate(in %%): ");
    scanf ("%f",&rate);
    printf ("Enter time period(in years): ");
    scanf ("%d",&time);
    Rate = rate/100;
    float simpleinterest = (principal*rate*time)/100;
    float compoundinterest = principal * (pow((1 + rate / 100), time)) - principal;
    printf ("Simple interest: %.3f\n",simpleinterest);
    printf ("Compound interest: %.3f",compoundinterest);
    return 0;
}