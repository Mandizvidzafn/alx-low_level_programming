#include "main.h"

/**
*  _strcmp - Function which compare two strings and
*@s1: first string
*@s2:second string
*Return:
*		returns zero if s1 == s2
*		returns negative number if s1 < s2
*		returns positive number if s1 > s2
*/

void *cap_string(char s[]) {
   int c = 0;
   int spaceCounter = 0; //First word not to be capitalized

   while (s[c] != '\0')
   {
     if ((spaceCounter %2 == 1) && s[c] >= 'a' && s[c] <= 'z')
     {
        s[c] = s[c] - 32; // You can use toupper function for the same.
     }
     else if(s[c] == ' ')
     {
        spaceCounter++; //Reached the next word
     }
     c++;
  }
}
