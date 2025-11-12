//write a program which accepts three numbers and prints its multiplication.

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////

#include<stdio.h>                               //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description :   To prints its multiplication.
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar
//  Date :          23/10/2025
//
/////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult = 1;
    int zeroCnt = 0;

    if(iNo1 == 0)
    {
        zeroCnt++;
    }
    else
    {
        iResult = iResult * iNo1;
    }

    if(iNo2 == 0)
    {
        zeroCnt++;
    }
    else
    {
        iResult = iResult * iNo2;
    }

    if(iNo3 == 0)
    {
        zeroCnt++;
    }
    else
    {
        iResult = iResult * iNo3;
    }

    if(zeroCnt == 3)
    {
        iResult = 0;
    }

    return iResult;
}//End of Multiply

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{

    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int bRet = 0;

    printf("Enter three Numbers : \n");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    bRet = Multiply(iValue1,iValue2,iValue3);               //Function call

    printf("Multiplication of three no.s is : %d",bRet);

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input1 : 2   Input2 : 3   Input3 : 4    Output : Multiplication of three no.s is : 24
//  Input1 : 0   Input2 : 5   Input3 : 2    Output : Multiplication of three no.s is : 10
//  Input1 : 0   Input2 : 0   Input3 : 7    Output : Multiplication of three no.s is : 7
//  Input1 : 0   Input2 : 0   Input3 : 0    Output : Multiplication of three no.s is : 0   
//  Input1 : -2  Input2 : 3   Input3 : 4    Output : Multiplication of three no.s is : -24
//  
//
/////////////////////////////////////////////////////////////