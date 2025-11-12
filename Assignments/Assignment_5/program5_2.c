//Find Maximum of two numbers

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////

#include<stdio.h>                       //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : FindMax
//  Description :   Find Maximum of two numbers
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar          
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////

int FindMax(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}//End of FindMax

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iNum1 = 0, iNum2 = 0, iResult = 0;

    printf("Enter first number : ");
    scanf("%d",&iNum1);

    printf("Enter second number : ");
    scanf("%d",&iNum2);

    iResult = FindMax(iNum1,iNum2);             //Function Call

    printf("Maximum is : %d",iResult);

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input1 : 12    Input2 : 16      Output : Maximum is : 16 
//  Input1 : 9     Input2 : 5       Output : Maximum is : 9
//  Input1 : 10    Input2 : 12      Output : Maximum is : 12
//
/////////////////////////////////////////////////////////////