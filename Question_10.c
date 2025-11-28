#include <stdio.h>
int main(){

    int hours, minutes, seconds, total_seconds, remaining_seconds;

    printf ("Enter total number of seconds: ");
    scanf ("%d",&total_seconds);

    hours = total_seconds/3600;
    remaining_seconds = total_seconds % 3600;
    minutes = remaining_seconds/60;
    seconds = remaining_seconds % 60;
    
    printf ("Total seconds: %d\n", total_seconds);
    printf ("Formated time: %02d:%02d:%02d", hours, minutes, seconds);
    return 0;
}