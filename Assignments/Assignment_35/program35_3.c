#include<stdio.h>

int Difference(char str[])
{//incomplete
    int iSmall = 0;
    int iCapital = 0;

    while (*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
        {
            iSmall++;
        }
        str++;
    }

    while (*str != '\0')
    {
        if((*str >= 65) && (*str <= 90))
        {
            iCapital++;
        }
        str++;
    }
    
    return iSmall - iCapital;
    
}

int main()
{
    char arr[20];;
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);
    
    iRet = Difference(arr);

    printf("%d",iRet);
    
    return 0;
}