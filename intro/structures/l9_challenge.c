#include <stdio.h>
#include <stddef.h> //for NULL
#include <stdlib.h> //for dynamic memory allocation
#include <string.h>

struct item
{
        char * itemName;
        int quantity;
        float price;
        float amount;
};

void readItem(struct item * i){
    char itemName[40];
    int itemQuant;
    float itemPrice;

    printf("\n\n");
    printf("Input Item Name: ");
    scanf("%s", itemName);
    printf("Input item quantity: ");
    scanf("%d", &itemQuant);
    printf("Input item price: ");
    scanf("%f", &itemPrice);

    i->itemName = malloc(sizeof(itemName)+1);
    strcpy(i->itemName, itemName);
    i->quantity = itemQuant;
    i->price = itemPrice;
    i->amount = itemQuant*itemPrice;

    return;
}

void printItem(struct item * i){
    printf("\n\nYour Item:\n");
    printf("Name: %s\nQuantity: %d\nPrice: %f\nAmount: %f", i->itemName, i->quantity, i->price, i->amount);
    return;
}

int main(){

    //declaring and initing structures challenge
    
    struct employee
    {
        char name[40];
        int hireDate;
        float salary;
    };

    struct employee computerEmployee = {"John Computer", 2007, 15.95};

    char iname[40] = "";
    int ihire;
    float isalary;
    struct employee inputEmployee;

    printf("\nEnter your name: ");
    scanf("%s", iname);
    strcpy(inputEmployee.name, iname);
    printf("\nEnter hire date: ");
    scanf("%d", &ihire);
    inputEmployee.hireDate = ihire;
    printf("\nEnter salary: ");
    scanf("%f", &isalary);
    inputEmployee.salary = isalary;

    printf("Computer Employee:\nname - %s\nhire date - %d\nsalary - %.4f", computerEmployee.name, computerEmployee.hireDate, computerEmployee.salary);
    printf("\n\nInput Employee:\nname - %s\nhire date - %d\nsalary - %f", inputEmployee.name, inputEmployee.hireDate, inputEmployee.salary);

    //Structure Pointers and Functions Challenge
    struct item myItem;
    readItem(&myItem);
    printItem(&myItem);

    return 0;
}