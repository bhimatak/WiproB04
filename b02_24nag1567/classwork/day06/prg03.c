/*
wild ptr, void ptr, null ptr, dangling ptr

int *ptr; => without initialzing it is wild ptr
void *ptr; generic ptr => it can point to any datatype
int *ptr=NULL; => initialized to NULL will be called as null ptr


*/
#include<stdio.h>
#include <stdlib.h>
#include "myHeader.h"

int main()
{
    int *arr=NULL;
    int i, SIZE, key;
    int res=0;
    printf("\nEnter the no of elements for array\n");
    scanf("%d",&SIZE);

    arr = (int *)malloc(SIZE*sizeof(int));

    printf("\nEnter %d elements of array\n",SIZE);
    for(i=0;i<SIZE;i++)
        scanf("%d",&arr[i]);

    display(arr, SIZE);
    printf("\nEnter the value to be searched in the list\n");
    scanf("%d",&key);
    res = searchValue(arr, SIZE, key);
    if(res >=0)
    {
        printf("\nValue is Present in the list\n");
        printf("\n%d Key is found at %d position",key,res);
    }
    else
    {
        printf("\n%d Key is not present in the list\n", key);
    }


    printf("\n\n");

    return 0;
}