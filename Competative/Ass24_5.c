/*Question = Accept number of rows and number of columns from user and display below pttern.

Input = iRows = 4   iCol = 4
Output = ENter number of Rows :4
        ENter umber of Columns :4
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16
*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 0;
    iCnt = 1;

    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iCnt);
            iCnt++;
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