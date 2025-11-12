//1
#include<stdio.h>

void PrintNumbers(int iNo)
{
    int iCnt = 0;
    printf("Numbers are : \n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int limit = 0;

    printf("Enter number : \n");
    scanf("%d",&limit);

    PrintNumbers(limit);

    return 0;
}