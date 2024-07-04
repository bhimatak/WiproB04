#include <stdio.h>

#define MAX 5

int REAR= 0;
int FRONT = 0;

int arr[MAX];

void enqueue(int);
int dequeue();
void dispQueue();


//driver code

int main()
{
    int ret=0;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    dispQueue();
    
    ret = dequeue();
    if(ret >=0)
        printf("\nDequeued element is %d",ret);
    dispQueue();

    ret = dequeue();
    if(ret >=0)
        printf("\nDequeued element is %d",ret);
    dispQueue();

    ret = dequeue();
    if(ret >=0)
        printf("\nDequeued element is %d",ret);
    dispQueue();

    ret = dequeue();
    if(ret >=0)
        printf("\nDequeued element is %d",ret);
    dispQueue();

    ret = dequeue();
    if(ret >=0)
        printf("\nDequeued element is %d",ret);
    dispQueue();

    printf("\n\n");
    return 0;
}



void enqueue(int val)
{
    if(REAR == MAX)
    {
        printf("\nQUEUE is FULL");
        return;
    }
    arr[REAR++] = val;
}

int dequeue()
{
    int ret=0;
    if(FRONT == REAR)
    {
        printf("\nQUEUE is empty");
        //reset
        FRONT = 0;
        REAR = 0;
        return -1;
    }
    ret = arr[FRONT];
    FRONT++;
    return ret;
}

void dispQueue()
{
    int i;
    if(FRONT == REAR)
    {
        printf("\nQUEUE is empty");
        //reset
        FRONT = 0;
        REAR = 0;
        return;
    }
    printf("\nQueue is\n");
    for(i=FRONT;i<REAR;i++)
        printf("%d ",arr[i]);
    printf("\n\n");
}