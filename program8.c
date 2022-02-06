// 8.program to simulate the working of an ordinary Queue using an array. Provide operations QINSERT, QDELETE and QDISPLAY.

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int que[SIZE], item, r=-1, f=0, item_delete;

void insert()
{
    printf ("Enter the number to insert into Queue \n");
    scanf("%d", &item);

    if (r == SIZE-1)
    {
        printf ("Queue is Full \n");
        return;
    }
    r = r+1;
    que[r] = item;
}


void delete()
{
    if (f > r)
    {
        printf ("Queue is Empty \n");
        return;
    }
    item_delete = que[f++];
    printf ("The deleted item is : %d\n", item_delete);
}


void display()
{
    int i;
    if (f > r)
    {
        printf ("Queue is Empty \n");
        return;
    }
    printf ("The items in Queue are : \n");
    for (i=f; i<=r; i++)
    {
        printf ("%d \n",que[i]);
    }
    
}


int main()
{
    int choice; 

    do
    {
        printf ("\nEnter your choice: \n");
        printf ("1.Insert \n2.Delete \n3.Display \n4.Exit \n");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;
            default: printf ("Enter correct choice \n"); 
                    break;
        }
    }while(choice <= 4);

    return 0;
}