#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFre = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]  == iNo)
        {
            iFre++;
        }  
    }
    return iFre;
    
}

int main()
{
    int iSize = 0,iRet = 0, iCnt = 0, iValue = 0 ;
    int *p = NULL;

    printf("Enter The Number Of elements : ");
    scanf("%d",&iSize);

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    p = (int *) malloc(iSize * sizeof(int));

    if(p== NULL)
    {
        printf("Unable to allocate memory ");
        return -1;
    }
    printf("Enter %d elements\n", iSize);

    for(iCnt =  0; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d : ", iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Frequency(p , iSize , iValue);
    printf(" %d ",iRet);


    free(p);

    return 0;
}