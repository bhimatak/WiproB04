#include <stdio.h>
#include "emp.h"

int main()
{
    EMP e[10];
    int i;
    for(i=0;i<3;i++)
        getData(&e[i]);
    for(i=0;i<3;i++)
        display(e[i]);
    
    if(findEmpName(e,3,"2") == 1)
        printf("\nFound\n");
    else
        printf("\nNot Found\n");
    printf("\n\n");
    return 0;

}