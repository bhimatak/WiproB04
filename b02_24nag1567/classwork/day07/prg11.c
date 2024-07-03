#include <stdio.h>
#include "emp.h"
#include "emp.c"

int main()
{
    EMP e;
    FILE *fptr;
    fptr = fopen("emp.data","r");
    fscanf(fptr,"%s %d %d",e.empName, &e.empId, &e.empSal);

    display(e);
    
    printf("\n\n");
    fclose(fptr);
    return 0;
}