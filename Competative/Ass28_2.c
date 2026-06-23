/*Question = Accept number of rows and number of columns from user and display below pttern.

Input = iRows = 4   iCol = 4
Output = ENter number of Rows :4
        ENter umber of Columns :4
*       *       *       #
*       *       #       @
*       #       @       @
#       @       @       @
*/


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        printf("Number of Rows and Columns should be equal\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
           if(j == i)
           {
            printf("#\t");
           }
           else if (j > i)
           {
                printf("*\t");
           }
           
           else
            {
                printf("@\t");
            }
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