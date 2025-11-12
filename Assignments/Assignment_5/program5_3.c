
/////////////////////////////////////////////////////////////
//
// Required Header File
//
/////////////////////////////////////////////////////////////

#include<stdio.h>                           //For Input Output

/////////////////////////////////////////////////////////////
//
//  Function Name : CheckLeapYear
//  Description :   Check it is a LeapYear or not
//  Input :         integer
//  Output :        integer
//  Author :        Tejas Pradip Sutar          
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if(((year % 4 == 0)&&(year % 100 != 0)) || (year % 400 == 0))
    {
        printf("%d is a Leap Year",year);
    }
    else
    {
        printf("%d is not Leap Year",year);
    }
}//End of CheckLeapYear

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//
/////////////////////////////////////////////////////////////

int main()
{
    int iYear = 0;
    printf("Enter Year : ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);                   //Function Call

    return 0;

}//End of main

/////////////////////////////////////////////////////////////
//
//  Test Cases are successfully handeled by application
//
//  Input : 2000       Output : 2000 is a Leap Year
//  Input : 2021       Output : 2021 is not a Leap Year
//  Input : 2024       Output : 2024 is a Leap Year
//  Input : 2015       Output : 2015 is not a Leap Year
//
/////////////////////////////////////////////////////////////