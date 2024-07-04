#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
}NODE;

void dispList(NODE *);

int dispMenu();

int main()
{
    NODE *nn=NULL, *head=NULL, *temp=NULL;
    int ch = 1, flag=0;

    while(1)
    {
        ch = dispMenu();
        switch (ch)
        {
        case 1:
            //create nn
            break;
        case 2:
            //add nn in end
            break;
        case 0:
            printf("\nExiting the program...");
            flag = 1;
            break;
        default:
            break;
        }
        if(flag == 1)
            break;   
    }

    
    printf("\n\n");
    return 0;
}


void dispList(NODE *head)
{
    printf("\nList is\n");
    while(head != NULL)
    {
        printf("%d->",head->val);
        head = head->next;
    }

    printf("NULL\n");
}


int dispMenu()
{
    int ch;

    printf("\nPress,");
    printf("\n1. Create a new node");
    printf("\n2. add new node in the end");
    printf("\n3. add new node in the begining");
    printf("\n4. add new node after a value");
    printf("\n5. display list");
    printf("\n0. to exit");
    printf("\nChoice: ");
    scanf("%d",&ch);

    return ch;
}