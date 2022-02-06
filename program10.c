#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int que[SIZE], item, r=-1, f=0, item_delete, count=0;

void insert()
{
    printf ("Enter the number to insert into Circular Queue \n");
    scanf("%d", &item);
    //printf("f=%d\n",f);
    if (count == SIZE)
    {
        printf ("Queue is Full \n");
        return;
    }
    r = (r+1) % SIZE;
    que[r] = item;
    count++;
}


void delete()
{
    if (count == 0)
    {
        printf ("Queue is Empty \n");
        return;
    }
    
    printf ("The item deleted is %d \n", que[f]);
    f = (f+1) % SIZE;
    count--;
}


void display()
{
    int i,j;
    if (count == 0)
    {
        printf ("Queue is Empty \n");
        return;
    }
    printf ("The items in Queue are : \n");
    i = f;
    for (j=1; i<=count; i++)
    {
        printf ("%d \n",que[i]);
        i = (i+1) % SIZE;
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