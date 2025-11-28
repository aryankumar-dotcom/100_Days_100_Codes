#include <stdio.h>
int main()
{
    float p, r, t;
    float amount, ci;
    float si;
    printf ("Enter the value for principle: ");
    scanf ("%f",& p);
    printf ("Enter the value for Rate: ");
    scanf ("%f",& r);
    printf ("Enter the value for Time: ");
    scanf ("%f",& t);

    si = (p*r*t/100.0);
    
    float base = 1.0 + (r/100.0);
    int total_years = (int)t;
    amount = p; 
    for (int i=0;i < t;i++)
    {
        amount *= base;
    }
    ci = amount - p;
    printf ("Simple Interest earned: %.2f\n", si);
    printf ("Total amount after %.0f years= %.2f\n", t, amount);
    printf ("compund interest earned= %.2f", ci);
    return 0;
}