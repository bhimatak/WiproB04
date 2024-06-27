#include <stdio.h>
#define CAP 5

int main()
{
    int arr[CAP];
    int noElement=0;
    printf("\nSize of the array in bytes: %d",sizeof(arr));
    noElement = sizeof(arr)/sizeof(arr[0]);
    printf("\nNo of elements : %d",noElement);

    printf("\n\n");

    return 0;
}