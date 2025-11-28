#include <stdio.h>
int main(){
    char ch;
    printf ("Enter any character: ");
    scanf ("%c",& ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf ("\n The character %c is a vowel.\n", ch);
        }
        else if ((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf ("The character %c is a consonant.\n", ch);
        }
        else{
            printf ("The entered character %c is not an alphabet value.\n", ch);
        }

    return 0;
}