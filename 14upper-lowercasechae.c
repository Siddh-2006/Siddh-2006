//finding intake character is upper case ,lower case or special case#include <stdio.h>
int main()
{   //taking input character from a user
    char c;
    scanf("%c", &c);
    //for capital letter
    if (65 <=c && c<= 90)
    {
        printf("%c is uppercase letter", c);
    }
    //for small letter
    else if (97 <=c && c<= 122)
    {
        printf("%c is lowercase letter", c);
    }
    //for special symbol
    else
    {
        printf("%c is a digit or a special symbol", c);
    }
        return 0;
    }