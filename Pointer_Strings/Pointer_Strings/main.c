#include <stdio.h>
#include <stdlib.h>


int countStringLen(const char *strPtr)
{
    int startPtr = strPtr;
    while(*strPtr != '\0')
    {
        strPtr++;
    }
    int finalLen = (strPtr - startPtr);
    return  finalLen;
}

int main()
{
    char string1 [50];
    printf("Enter a string: ");
    scanf("%50[0-9a-zA-Z ]",string1);
    printf("\nLength of the string is: %d",countStringLen(string1));

    return 0;
}
