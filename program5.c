#include <stdio.h>
#define SIZE 10
int stack[SIZE], choice, n, top=-1, i, item;

void push();
void pop();
void display();

int main()
{
    // top = -1;

    printf ("\n\t\t STACK OPERATIONS USING ARRAY \n");
    printf ("\t\t -----------------------------\n");
    do
    {
        printf ("\n1.PUSH \n2.POP \n3.DISPLAY \n4.EXIT\n ");
        printf ("Entr your choice : ");
        scanf ("%d", &choice);

        switch (choice)
        {
            case 1 : push();
                    break;
            case 2 : pop();
                    break;
            case 3 : display();
                    break;
            case 4 : printf ("EXIT");
                    break;
            default : printf ("Invalid Choice \n");
                    break;
        }
    } while (choice != 4);

    return 0;
}

void push()
{
    if (top >= SIZE-1)
    {
        printf ("\t Stack Over Flow \n");
    }
    else
    {
        printf ("\t Enter the value to be pushed : ");
        scanf ("%d",&item);
        top++;
        stack[top] = item;
    }
}

void pop()
{
    if (top <= -1)
    {
        printf ("\t Stack Under Flow \n");
    }
    else
    {
        printf ("\t The element popped is : %d \n", stack[top]);
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        printf ("\tThe elements in the Stack are : \n");
        for (i=top; i>=0; i--)
        {
            printf ("\t  %d\n",stack[i]);
        }
        printf ("\n");
    }
    else
    {
        printf ("\t  Stack is Empty \n");

    }
}
