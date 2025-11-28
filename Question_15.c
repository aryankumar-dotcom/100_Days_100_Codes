#include <stdio.h>
int main(){
    char ch;
    printf ("Enter any character: ");
    scanf ("%c",& ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf ("The character '%c' is an uppercase alphabet.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf ("The character '%c' is a lowercase alphabet.\n", ch);
    }
    else if (ch >= '0' && ch <= '9'){
        printf ("The character '%c' is a number.\n", ch);
    }
    else{
        printf ("The character '%c' is a special character.\n");
    }
    return 0;
}