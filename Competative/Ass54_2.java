/*

    
*/

package Advanced_LB;

import java.util.Scanner;

class Ass54_2
{
    int Withdrawl(int wAmount, int iBalance)
    {
        int newBalance = 0;

        if(wAmount <= 0 || iBalance < 0)
        {
            System.out.println("Transaction Failed : Invalid Input");
            return -1;   
        }
        
        else if(wAmount % 100 != 0)
        {
            System.out.println("Transaction failed : Withdrawl must be multiple of 100");
            return -1;
        }

        else if(wAmount > 25000)
        {
            System.out.println("Transaction failed : Maximum withdrawl limit is $25000");
            return -1;
        }

        else
        {
            newBalance = iBalance - wAmount;
        }

        return newBalance;
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int wAmount = 0;
        int iBalance = 0;
        int iRet = 0;

        System.out.println("Enter withdrawl amount : ");
        wAmount = sobj.nextInt();

        System.out.println("Enter Balance : ");
        iBalance = sobj.nextInt();

        Ass54_2 aobj = new Ass54_2();

        iRet = aobj.Withdrawl(wAmount, iBalance);

        if(iRet == -1)
        {
            System.out.println("Enter Valid Input");
        }
        else
        {
            System.out.println("Transaction Successful");
            System.out.println("Remaining Balance : "+iRet);
        }
    }    
}
