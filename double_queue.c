#include <stdio.h>
#include <stdlib.h>
int rear, front=0, rear=-1, size, q[30], item;

void insertRear()
{
    if(rear == size-1)
    {
        printf("DEQueue is Full \n");
        return;
    }
    printf("Enter the item: ");
    scanf("%d", &item);
    q[++rear] = item;
}

void insertFront()
{
    if(front < rear)
    {
        printf("Insertion is not possible from front end \n");
        return;
    }
    printf("Enter the item: ");
    scanf("%d", &item);
    if((front == 0) && (rear == -1))
        q[++rear] = item;
    if(front != 0)
        q[--front] = item;
}

void deleteFront()
{
    if(front > rear)
    {
        printf("DEQueue is Empty \n");
        return;
    }
    printf("Item Deleted: %d\n",q[front]);
    front++;
}

void deleteRear()
{
    if(front > rear)
    {
        printf("DEQueue is Empty \n");
        return;
    }
    printf("Item Deleted: %d\n",q[rear]);
    rear++;

    if(front > rear)
        front=0, rear=-1;
}

void display()
{
    if(front > rear)
    {
        printf("DEQueue is Empty \n");
        return;
    }
    printf("The elements in DEQueue are: \n");
    for(int i=front; i<=rear; i++)
        printf("%d\n",q[i]);
}

int main()
{
    int choice;

    printf("--- Double Ended Queue Operations ---\n");
    while(1)
    {
        printf("\n1.Insert Front \n2.Insert Rear \n3.Delete Front \n4.Delete Rear \n5.Display \n6.Exit \n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insertFront(); break;
            case 2: insertRear(); break;
            case 3: deleteFront(); break;
            case 4: deleteRear(); break;
            case 5: display(); break;
            case 6: exit(0);
            default: printf("Invalid Choice! \n");
        }
    }
    return 0;
}