/*
    Accept matrix and return the largest from both the diagonal
*/

package Matrix;

import java.util.*;

class Matrix
{   
    private int iRow;
    private int iCol;
    private int Arr[][];

    int i = 0;
    int j = 0;

    public Matrix(int a, int b)
    {
        iRow = a;
        iCol = b;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elemnts : ");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elemnts of the Array : ");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int MaxDiagonal()
    {
        if(iRow != iCol)
        {
            System.out.println("Invalid Input");
            return -1;
        }
        int iMax = Arr[0][0];

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if((i == j || i + j == iRow - 1) && Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax;
    }
}

class Ass52_3
{
    public static void main(String A[])
    {

        Scanner sobj = new Scanner(System.in);

        int iRow = 0;
        int iCol = 0;
        int iRet = 0;

        System.out.println("Enter number of Rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();

        mobj.Display();

        iRet = mobj.MaxDiagonal();

        System.out.println("Largest number is : "+iRet);

    }
}