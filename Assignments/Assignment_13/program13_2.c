//2
#include<stdio.h>

void PrintEvenNumbers(int iNo)
{
    int iCnt = 0;
    printf("Even numbers are : \n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
        printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int limit = 0;

    printf("Enter number : \n");
    scanf("%d",&limit);

    PrintEvenNumbers(limit);

    return 0;
}