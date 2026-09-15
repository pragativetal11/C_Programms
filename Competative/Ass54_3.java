/*

    
*/

package Advanced_LB;

import java.util.Scanner;

class Ass54_3
{
    void DisplayResult(int Marks[])
    {
        int Total = 0;
        double Average = 0.0;

        for(int i = 0; i < Marks.length; i++)
        {
            if(Marks[i] < 0 || Marks[i] > 100)
            {
                System.out.println("Invalid Marks");
                return;
            }
            if(Marks[i] < 35)
            {
                System.out.println("Result : Fail");
                return;
            }
            else
            {
                Total = Total + Marks[i];
            }
        }
        Average = Total / 5.0;
        System.out.println("Average Marks :"+ Average);


        if(Average >= 75)
        {
            System.out.println("Final Result : Distinction");
        }
        else if(Average >= 60)
        {
            System.out.println("Final Result : First Class");
        }
        else if(Average >= 50)
        {
            System.out.println("Final Result : Second Class");
        }
        else
        {
            System.out.println("Final Result : Pass");
        }
    }

    public static void main(String A[])
    {
        String Subject[] = {"English", "Marathi", "hindi", "Science", "Maths" };
        int mArr[] = new int[5];

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Marks of Each Subject : ");

        for(int i = 0; i < mArr.length; i++)
        {
            System.out.print(Subject[i] + " = ");
            mArr[i] = sobj.nextInt();
        }

        Ass54_3 aobj = new Ass54_3();
        aobj.DisplayResult(mArr);
        
    }    
}
