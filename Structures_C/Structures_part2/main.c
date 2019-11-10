#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct item
{
    char *itemName[20];
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *itemPtr)
{
    printf("Enter product name: ");
    scanf("%s",itemPtr->itemName);
    printf("Enter product quanity (in Kg.): ");
    scanf("%d",&itemPtr->quantity);
    printf("Enter product price (Dollars): ");
    scanf("%f",&itemPtr->price);
    itemPtr->amount = (itemPtr->quantity * itemPtr->price);
}

void printItem(struct item *itePtr)
{
    printf("***Receipt***");
    printf("\nProduct name: %s\n",itePtr->itemName);
    printf("Product quantity: %d Kg.\n",itePtr->quantity);
    printf("Product price: %.2f dollars\n",itePtr->price);
    printf("Product amount: %.2f dollars\n",itePtr->amount);

}

int main()
{
    struct item *itemPtr;
    //itemPtr->itemName = (char*)malloc(20);
    readItem(&itemPtr);
    printItem(&itemPtr);
    return 0;
}
