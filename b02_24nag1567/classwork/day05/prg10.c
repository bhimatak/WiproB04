#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a=10;
    int *ptr;
    // ptr = &a;
    //ptr = address
    ptr = (int *)malloc(sizeof(int));

    printf("\nptr's address = %u",&ptr);
    printf("\nAddress pointed/assigned to ptr = %u",ptr);
    *ptr = 101;
    printf("\nValue %d is stored at %u address", *ptr, ptr);

    printf("\n%d %d",*ptr,a);
    printf("\n\n");

    return 0;
}