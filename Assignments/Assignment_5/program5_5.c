//Find largest of three numbers

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////

#include<stdio.h>                       //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description :   To Find largest of three numbers
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar          
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////

int FindLargest(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        return iNo1;
    }
    else if(iNo2 > iNo3)
    {
        return iNo2;
    }
    
    else
    {
        return iNo3;
    }
}//End of FindLargest

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iNum1 = 0, iNum2 = 0, iNum3 = 0, iResult = 0;

    printf("Enter first number : ");
    scanf("%d",&iNum1);

    printf("Enter second number : ");
    scanf("%d",&iNum2);

    printf("Enter third number : ");
    scanf("%d",&iNum3);

    iResult = FindLargest(iNum1,iNum2,iNum3);           //Function Call

    printf("Largest number is : %d",iResult);

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input1 : 12   Input2 : 10   Input3 : 9     Output : 12
//  Input1 : 19   Input2 : 25   Input3 : 15    Output : 25
//  Input1 : 22   Input2 : 29   Input3 : 31    Output : 31
//
/////////////////////////////////////////////////////////////