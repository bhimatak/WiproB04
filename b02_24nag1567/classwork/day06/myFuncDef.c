#include <stdio.h>
#include "myHeader.h"


int searchValue(int arr[], int SIZE, int key)
{
    int i, flag=-1;
    for(i=0;i<SIZE;i++)
    {
        if(key == arr[i])
        {
            flag = i;
            break;
        }
    }

    return flag;
}


void display(int arr[], int SIZE)
{
    int i;
    printf("\nElements of the array are\n");
    for(i=0;i<SIZE;i++)
        printf(" %d ",arr[i]);
    
    printf("\n\n");
}