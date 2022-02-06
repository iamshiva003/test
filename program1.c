// 1.Program to Calculate item prices used in party and divide the expenses amount in friends equally in C using Structures

#include <stdio.h>
#define MAX 50

typedef struct item_details
{
    char item_name[50];
    int quantity;
    float price;
    float totalAmout;
}item;

int main()
{
    item things[MAX];
    int i,choice,count=0;
    float expenses=0.0;

    i = 0;
    do
    {
        printf ("Enter the item Details\n");
        printf ("Item Name:          ");
        scanf ("%s",things[i].item_name);
        printf ("Enter the Price:    ");
        scanf("%f",&things[i].price);
        printf ("Enter the Quantity: ");
        scanf ("%d",&things[i].quantity);

        things[i].totalAmout = things[i].quantity * things[i].price;
        expenses += things[i].totalAmout;
 
        i++; 
        count++;

        printf ("\nWant to add more items? (press 1)\n");
        scanf ("%d",&choice);
    } while (choice == 1);
    
    printf ("\nAll details area: \n");
    printf ("Item_Name\t Price\t Quantity\t TotalAmout\n");
    for (i=0; i<count; i++)
    {
        printf ("%s\t\t %0.2f\t %d\t\t %0.2f\n",things[i].item_name, things[i].price, things[i].quantity, things[i].totalAmout);
    }
    printf ("\nTotal Expense = %0.2f \n",expenses);
    printf ("Want to divide with Friends? (press 1)\n");
    scanf ("%d", &choice);
    
    if (choice == 1)
    {
        printf ("How many Friends? \n");
        scanf ("%d",&i);
        printf ("Each Friend will have to pay: %0.2f RS \n",(expenses/(float)i));
    }
    printf ("--- Thank You --- \n");
    return 0;
}