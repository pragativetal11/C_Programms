/*Question = Accept number of rows and number of columns from user and display below pttern.

Input = iRows = 4   iCol = 3
Output = *  *   *
        *  *   *
        *  *   *
        * *  *   
*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(int i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
        printf("%d\t",j);  
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("ENter number of Rows :");
    scanf("%d",&iValue1);

    printf("ENter umber of Columns :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}