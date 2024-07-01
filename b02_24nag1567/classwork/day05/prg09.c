#include <stdio.h>

int main()
{
    int a[3] = {1,2,3};
    int *ptr;
    int i, sum=0;


    printf("\na[0] = %d",a[0]);
    printf("\na[0] = %d",*(a+0));
    
    printf("\na[1] = %d",a[1]);
    printf("\na[1] = %d",*(a+1));
    printf("\na[2] = %d",a[2]);
    printf("\na[2] = %d",*(a+2));


    for(i=0;i<3;i++)
        printf("\na[%d] = %d",i,*(a+i));

    sum = *(a+0)+*(a+1)+*(a+2);
    printf("\nSum = %d\n",sum);


    printf("\na[0] = %d",*a);

    ptr = &a[0];

    printf("\nusing ptr a[0] = %d",*ptr);


    ptr = &a[1];

    printf("\nusing ptr a[1] = %d",*ptr);



    

    printf("\n\n");

    return 0;
}