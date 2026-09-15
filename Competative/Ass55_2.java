/*

    
*/

package Advanced_LB;

import java.util.Scanner;

class Ass55_2
{
    int CheckDetails(int iAge, int Income, int CreaditScore, String UnpaidLoan)
    {
        if(iAge < 0 || Income < 0 || CreaditScore < 0)
        {
            System.out.println("Invalid Input");
            return -1;
        }

        if(!"Yes".equals(UnpaidLoan) && !"No".equals(UnpaidLoan))
         {
            System.out.println("Invalid Input");
            return -1;
         }

        if(iAge > 60 || iAge < 21)
        {
            System.out.println("Invalid Age");
            return -1;
        }
         if(Income < 25000)
         {
            System.out.println("Loan Rejected : MInimum Monthly Income should be : 25000 ");
            return -1;
         }

         if(CreaditScore < 700)
         {
            System.out.println("Loan Rejected : minimum Creadit score must be : 700");
            return -1;
         }
         if("Yes".equals(UnpaidLoan))
         {
            System.out.println("Loan Rejected : Existing loan must be Paid");
            return -1;
         }

        return 2;
    }
    

    public static void main(String A[])
    {
        int Age = 0;
        int income = 0;
        int CreaditScore = 0;
        String UnpaidLoan = null;

        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Your Age : ");
        Age = sobj.nextInt();

        System.out.println("Enter your Monthly income : ");
        income = sobj.nextInt();

        System.out.println("Enter your Credit score : ");
        CreaditScore = sobj.nextInt();

        sobj.nextLine();

        System.out.println("Is there any Existing load :(Yes/No) ");
        UnpaidLoan = sobj.nextLine();

        Ass55_2 aobj = new Ass55_2();
        iRet = aobj.CheckDetails(Age, income, CreaditScore, UnpaidLoan);

        if(iRet != -1)
        {
            System.out.println("Loan Approved");
        }

    }    
}
