//Write a program which accept number from user and return summation of all its non factors.

/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////
#include<stdio.h>                           //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : SumNonFact
//  Description :   To display sum of all non factors
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar          
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{
    int iCnt = 0,iSum = 0;;
    printf("Factors is : \n");
    
    for(iCnt = 1; iCnt < iNo ;iCnt++)
    {
        if((iNo % iCnt != 0))
        {
            printf("%d\t",iCnt);
            iSum = iSum + iCnt;
        } 
    }
    return iSum;
}//End of SumNonFact

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

    iRet = SumNonFact(iValue);                  //Function Call

    printf("\nSummation of all Non Factors : %d",iRet);

    return 0;
}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : 12       Output : 50 
//  Input : 10       Output : 37
//
/////////////////////////////////////////////////////////////