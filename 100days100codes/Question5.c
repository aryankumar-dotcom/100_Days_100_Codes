#include <stdio.h>
int main()
{
   float farenhite,celcius;
   printf ("Enter temeprature in celcius: ");
   scanf ("%f",&celcius);
   farenhite = (celcius * 1.8) + 32;
   printf ("The temeprature in farenhite is: %f",farenhite);
   return 0;
}