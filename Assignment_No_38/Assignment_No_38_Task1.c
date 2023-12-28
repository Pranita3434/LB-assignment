#include<stdio.h>


typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    int iMask = 0x00000040;
    int iResult = 0;
    iResult = iNo & iMask;

    if(iResult == iMask)   
    {
        return (iNo ^ iMask);
    }
    else               
    {
        return iNo;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter The number : ");
    scanf("%d", &iNo);

    int iRet = 0;
    iRet = OffBit(iNo);
        
    printf("Modified Number is : %d", iRet);
    return 0;
}