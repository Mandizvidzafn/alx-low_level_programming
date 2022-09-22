#include "main.h"
#include <ctype.h>

/**
*  _strcmp - Function which compare two strings and
*@s1: first string
*@s2:second string
*Return:
*		returns zero if s1 == s2
*		returns negative number if s1 < s2
*		returns positive number if s1 > s2
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
