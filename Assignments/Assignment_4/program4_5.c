//Write a program which accept number from user and return difference between summation of all its factors and non factors.

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////
#include<stdio.h>                                   //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : FactDiff
//  Description :   To return difference between summation of all its factors and non factors
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar          
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0, iSumFact = 0, iNonSumFact = 0;
    
    for(iCnt = 1; iCnt <= iNo ;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;             //sum of Factorial
        } 
        else
        {
            iNonSumFact = iNonSumFact + iCnt;       //sum of non factorial
        }
    }
    return iSumFact - iNonSumFact;                  //Gives Difference between
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);                    //Function Call

    printf("\n Difference between sum of Fact and Non Fact is : %d",iRet);

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : 12       Output : -34 (16 - 50)
//  Input : 10       Output : -29 (8 - 37)
//
/////////////////////////////////////////////////////////////