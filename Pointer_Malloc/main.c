#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numOFBytes = 0;
    printf("Enter number of bytes required: ");
    scanf("%d",&numOFBytes);
    char *inputStr = NULL;
    inputStr = (char *)malloc(numOFBytes*sizeof(char));

    if(inputStr != NULL)
    {
        printf("Enter a string: ");
        scanf(" ");
        gets(inputStr);
        printf("Entered string is : %s",inputStr);
    }
    free(inputStr);

    return 0;
}
