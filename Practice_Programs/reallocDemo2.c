#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr=NULL;

    //step-1:Allocate the memory
    Arr=(int *)malloc(5 * sizeof(int));     //20

    //step-2: Use the memory
    Arr=(int *)realloc(Arr,3*sizeof(int));   //12

    //step-3:Free the memory
    free(Arr);
    

    return 0;
}