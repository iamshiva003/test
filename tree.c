#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* right;
    struct node* left;
};
typedef struct node* NODE;

NODE getnode(int item)
{
    NODE temp;

    temp = (NODE) (malloc(sizeof(struct node)));
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

NODE insert(int item, NODE root)
{
    if(root == NULL)
        return getnode(item);
    
    if(item < root->data)
        root->left = insert(item, root->left);
    else
        root->right = insert(item, root->right);
}

void display(NODE root, int level)
{
    if(root == NULL)
        return;
    
    display(root->right, level+1);
    for(int i=0; i<level; i++)
        printf("\t");
    
    printf("%d\n",root->data);
    display(root->left, level+1);
}

int main()
{
    NODE root;
    int choice, item;

    root = NULL;
    printf("--- BINARY TREE ---\n");
    while(1)
    {
        printf("\n1.Insert \n2.Display \n3.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:printf("Enter the item to be inserted: ");
                   scanf("%d",&item);
                   root = insert(item, root);
                   break;
            case 2:if(root == NULL)
                   {
                       printf("Tree is Empty\n");
                       break;
                   }
                   printf("The given tree in Tree form is\n");
                   display(root, 1);
                   break;
            case 3:exit(0);
            default:printf("Invalid Choice! \n");
        }
    }
    return 0;
}