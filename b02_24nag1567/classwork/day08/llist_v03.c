#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
}NODE;

void dispList(NODE *);

int dispMenu();

void *createNode();
NODE *appendList(NODE *, NODE *);
NODE *addNodeBeg(NODE *, NODE *);
void addNodeKey(NODE *, NODE *);



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
            //add nn in end
            
            head = appendList(nn,head);
            break;
        
        case 2:
            //add nn in beg
            
            head = addNodeBeg(nn,head);
            break;
        case 3:
            //add nn after a value
           
            addNodeKey(nn,head);
            break;
        case 4:
            dispList(head);
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
    
    printf("\n1. add new node in the end");
    printf("\n2. add new node in the begining");
    printf("\n3. add new node after a value");
    printf("\n4. display list");
    printf("\n0. to exit");
    printf("\nChoice: ");
    scanf("%d",&ch);

    return ch;
}


void *createNode()
{
    return (malloc(sizeof(NODE)));
}

NODE *appendList(NODE *nn, NODE *head)
{
    NODE *temp = head;
    nn = (NODE *)createNode();
    printf("\nEnter the value of new Node: ");
    scanf("%d",&nn->val);
    nn->next = NULL;

    if(temp == NULL)
    {
        //list is empty
        temp = nn;
        head = nn;
    }
    else
    {
        //list is present
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = nn;
        
    }

    return head;
}

NODE *addNodeBeg(NODE *nn, NODE *head)
{
    return head;
}

void addNodeKey(NODE *nn, NODE *head)
{

}