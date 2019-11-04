#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
Defining structure with tag name employee.Contains 3 members.
**/
struct employee
{
    char name[25];
    int hireDate;
    float salary;
}empVar;

/**
Defining function below to initialize members of structure employee.
This function initializes structure members and print it using pointer.
@Param: *Emp
@Return: void
**/
void initialize_Employee(struct employee *Emp)
{
    printf("\nEnter name: ");
    scanf("%s",Emp->name);
    printf("Hire Date: ");
    scanf("%d",&Emp->hireDate);
    printf("Salary: ");
    scanf("%f",&Emp->salary);
    printf("\nName is: %s\n",Emp->name);
    printf("Hire Date is: %d\n",Emp->hireDate);
    printf("Salary: %.2f",Emp->salary);
}

/**
Defining main function below to initialize members of structure employee first time.
This function initializes structure members and print it.
@Param: void
@Return: 0
**/
int main()
{
    struct employee empVar = {{'I','s','h','a','n'},{2018},{40000.00}};
    printf("Name: %s\n",empVar.name);
    printf("Hire Date: %d\n",empVar.hireDate);
    printf("Salary: %.2f\n",empVar.salary);
    initialize_Employee(&empVar);
    return 0;
}
