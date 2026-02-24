#include<stdio.h>

// best approach
int Strlen(char *str)
{
    if(*str == '\0')      // base case
    {
        return 0;
    }
    return 1 + Strlen(str + 1);
}


int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String : \n");
    scanf("%s",&arr);

    iRet = Strlen(arr);

    printf("Number of characters are : %d\n",iRet);

    return 0;
}

/*
#Alternate method#(As I followed while learning)
Works for understanding concept,
optimal solution should return value while unwinding recursion.

int Strlen(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        Strlen(str + 1);
    }
    return iCnt;
}


*/