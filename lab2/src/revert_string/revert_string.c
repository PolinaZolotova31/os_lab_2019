#include <string.h>
#include "revert_string.h"

void RevertString(char *str)
{
    char temp1, temp2;
    int length = strlen(str);
    for (int i=length/2; i>0; i--)
    {
        temp1 = str[i-1];
        temp2 = str[length-i];
        str[i-1] = temp2;
        str[length-i] = temp1;
   }
}

