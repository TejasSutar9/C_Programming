//write a program which accept one number from user and print even factors of that number.
//Input : 24
//Output : 1 2 4 6 8 12

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////
#include<stdio.h>                       //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : PrintEven
//  Description :   It is used to accept one number from user and print that number of even numbers
//  Input :         Integer
//  Output :        Integer
//  Author :        Tejas Pradip Sutar
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////
void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iCnt == 1 || (iNo % iCnt == 0)&&(iCnt % 2 == 0))      //i is a factor and i is even
        {
            printf("%d\t",iCnt);
        }
    }

}//End of DisplayFactor

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}//End of Main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : 24       Output : 1 2 4 6 8 12
//
/////////////////////////////////////////////////////////////