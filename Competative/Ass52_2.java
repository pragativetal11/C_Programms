/*
    Accept matrix and one number from user and 
    return frequency of the number
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
        Scanner sobj = new Scanner(System.in);

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

    public int CountFrequency(int iNo)
    {
        int iCount = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] == iNo)
                {
                    iCount++;
                }
            }
        }
        return iCount;
    }
}

class Ass52_2
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

        System.out.println("Enter number to count frequency : ");
        int iValue = sobj.nextInt();

        iRet = mobj.CountFrequency(iValue);

        System.out.println("Element occuers : "+iRet + " times");

    }
}