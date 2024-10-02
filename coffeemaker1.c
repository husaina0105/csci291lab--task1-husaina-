#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define ESPRESSO_BEANS 8
#define CAPPUCCINO_BEANS 8
#define MOCHA_BEANS 8

#define ESPRESSO_WATER 30
#define CAPPUCCINO_WATER 30
#define MOCHA_WATER 39

#define ESPRESSO_MILK 0
#define CAPPUCCINO_MILK 70
#define MOCHA_MILK 160

#define ESPRESSO_CHOCOLATE_syrup 0
#define CAPPUCCINO_CHOCOLATE_syrup 0
#define MOCHA_CHOCOLATE_syrup 30

#define ESPRESSO_PRICE 3.5
#define CAPPUCCINO_PRICE 4.5
#define MOCHA_PRICE 5.5
int order=0;
float total = 0.0;
int choice=0;
int milk,chocolate_syrup,water;
float price;


int main()
{
    printf("1.coffee machine\n");
    printf("2.adimin user\n");
    printf("3.exit\n");
    printf("ENTER YOUR SELECTION(1-3):");
    scanf("%d",&choice);

    while(choice!=1 && choice!=2 && choice!=3)
    {
    printf("Invalid choice!,choose again\n");
    printf("Enter your choice from 1-3:");
    scanf("%d",&choice);
    }
    

  int coffee_order()

   printf("1.ESPRESSO");
   printf("2.MOCHA");
   printf("3.CAPPUCCINO");
   printf("please enter your order from 1-3:");
   scanf("%d",&order);

   while(order!=1 && order!=2 && order!=3)
     {
    printf("Invalid choice!,choose again\n");
    printf("Enter your order from 1-3:");
    scanf("%d",&order);
    }
    if (order==0)
    {
        return 0
    }
    while(choice==1)
    {
        printf("Select a coffee (or 0 to exit): ");
        scanf("%d", &order);
        
        if (order == 1) {
            total += ESPRESSO_PRICE;
            printf("Added Espresso to your order. Total: %.2f\n", total);
        } 
        else if (order == 2) {
            total += CAPPUCCINO_PRICE;
            printf("Added Cappuccino to your order. Total: %.2f\n", total);
        } 
        else if (order == 3) {
            total += MOCHA_PRICE;
            printf("Added Mocha to your order. Total: %.2f\n", total);
        } 
    }
        while(choice==2)
    
 return 0



}
