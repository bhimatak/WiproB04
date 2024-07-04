#include <stdio.h>

#define MAX 5

int TOP=-1;
int BOTTOM =-1;

int arr[MAX];

void push(int);
int pop();
void dispStack();


//driver code

int main()
{
    int ret=0;
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    dispStack();
    ret = pop();
    if(ret >=0)
        printf("\nPopped out element is %d",ret);
    dispStack();

    ret = pop();
    if(ret >=0)
        printf("\nPopped out element is %d",ret);
    dispStack();

    ret = pop();
    if(ret >=0)
        printf("\nPopped out element is %d",ret);
    dispStack();

    ret = pop();
    if(ret >=0)
        printf("\nPopped out element is %d",ret);
    dispStack();

    ret = pop();
    if(ret >=0)
        printf("\nPopped out element is %d",ret);
    dispStack();

    
    printf("\n\n");
    return 0;
}



void push(int val)
{
    if(TOP == MAX-1)
    {
        printf("\nStack is FULL");
        return;
    }
    arr[++TOP] = val;
}

int pop()
{
    int ret=0;
    if(TOP == BOTTOM)
    {
        printf("\nStack is empty");
        return -1;
    }
    ret = arr[TOP];
    TOP--;
    return ret;
}

void dispStack()
{
    int i;
    if(TOP == BOTTOM)
    {
        printf("\nStack is empty");
        return ;
    }
    printf("\nStack is\n");
    for(i=TOP;i>=0;i--)
        printf("\n%d",arr[i]);
    printf("\n\n");
}