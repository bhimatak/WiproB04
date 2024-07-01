/*
int a=10; => mem rep => a is at location 65520 
co(65520)=>10
a is a name given to reprsent 65520 as address

Pointers:

dec:
    dt *ptrName;

    ptrName is a name of pointer which is pointing 
    towards dt as datatype

    int *ptr;

    Note: pointer does not belong to any datatype
          it belongsss to void => nothing
            void *ptr; => generic pointer

    reading: ptr is a sp variable which is pointing towards
            integer datatype




*/

#include <stdio.h>

int main()
{
    int a=10;
    int *ptr;

    printf("\nAddress of a= %u",&a);
    printf("\nValue %d is stored in %u address",a,&a);

    printf("\nAddress of ptr: %u", &ptr);
    printf("\nValue %u is stored in %u address",ptr,&ptr);

    ptr = &a;

    printf("\nValue %u is stored in %u address",ptr,&ptr);

    printf("\n\n");
    return 0;
}