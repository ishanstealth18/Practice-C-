#include <stdio.h>
#include <stdlib.h>


void calculateSquare(int *sqrPtr)
{

    *sqrPtr = (*sqrPtr * (*sqrPtr));
    printf("\nSquare of the number is: %d",*sqrPtr);
}

int main()
{
    int inputNum = 0;
    printf("Enter a number: ");
    scanf("%d",&inputNum);
    printf("\nNumber is : %d",inputNum);
    calculateSquare(&inputNum);
    return 0;
}
