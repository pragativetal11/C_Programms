/*Question = Accept number of rows and number of columns from user and display below pttern.

Input = iRows = 4   iCol = 3
Output = ENter number of Rows :3
        ENter umber of Columns :5
        5       4       3       2       1
        5       4       3       2       1
        5       4       3       2       1
*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(int i = 1; i <= iRow; i++)
    {
        for(j = iCol; j > 0; j--)
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