#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var1 = 10;
    int *ptr1 = NULL;
    ptr1 = &var1;

    printf("Address of the pointer: %p",&ptr1);
    printf("\nValue of the pointer: %p",ptr1);
    printf("\nValue of the pointer pointing to: %d",*ptr1);
    printf("Address of the variable: %p", &var1);
    return 0;
}
