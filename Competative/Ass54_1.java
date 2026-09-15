/*
    
*/


package Advanced_LB;

import java.util.*;

class Ass54_1
{
    void BookReturn(int iNo)
    {
        int iFine = 0;

        if(iNo <= 7)
        {
            System.out.println("Returned on time. No fine applicable");
        }
        else if(iNo > 7 && iNo <= 12)
        {
            for(int i = 8; i <= iNo; i++)
            {
                iFine = iFine + 5;
            }
            System.out.println("Total fine to be paid : "+iFine);
        }
        else if(iNo > 12)
        {
            for(int i = 12; i <= iNo; i++)
            {
                iFine = iFine + 10;
            }
            System.out.println("Total Fine to be paid "+iFine );
        }
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int DaysKept = 0;

        System.out.println("Enter number of days the book was kept : ");
        DaysKept = sobj.nextInt();

        Ass54_1 aobj = new Ass54_1();

        aobj.BookReturn(DaysKept);
    }
}