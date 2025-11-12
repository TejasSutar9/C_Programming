//write a program which accept one number from user and print that number of even numbers on screen.
//Input : 7
//Output : 2 4 6 8 10 12 14

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
void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",2*iCnt);
    }
}//End of PrintEven

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

    PrintEven(iValue);

    return 0;
}//End of Main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : 7       Output : 2 4 6 8 10 12 14
//
/////////////////////////////////////////////////////////////