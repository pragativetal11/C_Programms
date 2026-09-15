/*

    
*/

package Advanced_LB;

import java.util.Scanner;

class Ass55_5
{
    int TaxPayable(int income)
    {
        int Tax = 0;

        if(income < 0)
        {
            return -1;
        }

    if(income <= 250000)
    {
        Tax = 0;
    }
    else if(income <= 500000)
    {
        Tax = ((income - 250000) * 5) / 100;
    }
    else if(income <= 1000000)
    {
        Tax = (250000 * 5) / 100;
        Tax = Tax + ((income - 500000) * 20) / 100;
    }
    else
    {
        Tax = (250000 * 5) / 100;
        Tax = Tax + (500000 * 20) / 100;
        Tax = Tax + ((income - 1000000) * 30) / 100;
    }

    return Tax; 
    }
    public static void main(String A[])
    {
        int income = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your Anunal Income : ");
        income = sobj.nextInt();

        Ass55_5 aobj = new Ass55_5();
        iRet = aobj.TaxPayable(income);

        if(iRet == -1)
        {
            System.out.println("Invalid Input");
        }
        else
        {
            System.out.println("Annual Income : Rs. "+income);
            System.out.println("Total Tax Payable : Rs. "+iRet);
        }

    }

}
