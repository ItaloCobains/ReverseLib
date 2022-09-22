#include<string.h>
#include "mycode.h"

/**
 * It reverses the string
 *
 * @param string The string to reverse.
 *
 * @return The address of the first character in the string.
 */
char* reverse(char *string) {
  int len = strlen(string);
  for(int i=0;i<len/2;i++) {
    char temp = string[i];
    string[i] = string[len-1-i];
    string[len-1-i] = temp;
  }
  return string;
}