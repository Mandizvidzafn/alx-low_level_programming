#include "main.h"
#include <ctype.h>

/**
*  cap_string - Function to capitalize all words of a string
*Return: the string capitalized
*/

void capitalize_string(char *s)
{
    for (int prev = ' ';  *s;  ++s) {
        int current = (unsigned char)*s;
        if (!isalnum(prev) && isalpha(current)) {
            *s = (char)toupper(current);
        }
        prev = current;
    }
}
