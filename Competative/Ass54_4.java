/*

    
*/

package Advanced_LB;

import java.util.Scanner;

class Ass54_4
{
    int ElectricityBill(int iNo)
    {
        int Bill = 0;

        Bill = 1;

        if(iNo < 0)
        {
            System.out.println("Invalid Input");
        }

        if(iNo <= 100)
        {
            Bill = iNo * 5;
        }
        else if(iNo > 100 && iNo <= 200)
        {
            Bill = iNo * 7;
        }
        else
        {
            Bill = iNo * 10;
        }

        return Bill;

    }

    public static void main(String A[])
    {
        int iUnit = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Unit Consumed : ");
        iUnit = sobj.nextInt();

        Ass54_4 aobj = new Ass54_4();

        iRet = aobj.ElectricityBill(iUnit);
    
        System.out.println("Total Units Consumed : "+iUnit);
        System.out.println("Total Electricity Bill : "+iRet);
        
    }    
}
