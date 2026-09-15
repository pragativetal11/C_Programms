/*

    
*/

package Advanced_LB;

import java.util.Scanner;

class Ass55_4
{
    int FineAmount(String helmet, String license, String overspeeding)
    {
        int Fine = 0;

        if(!"Yes".equals(helmet) && !"No".equals(helmet) || !"Yes".equals(license)&& !"No".equals(license)
           || !"Yes".equals(overspeeding) && !"No".equals(overspeeding))
        {
            return -1;
        }

        if("No".equals(helmet))
        {
            Fine = 500;
        }

        if("No".equals(license))
        {
            Fine = Fine + 1000;
        }

        if("Yes".equals(overspeeding))
        {
            Fine = Fine + 1500;
        }

        return Fine;
    }
    

    public static void main(String A[])
    {
        String helmet = null;
        String license = null;
        String overspeeding = null;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Helment worn : (Yes/No)");
        helmet = sobj.nextLine();

        System.out.println("License Avialable : (Yes/No)");
        license = sobj.nextLine();

        System.out.println("Is Overspeeding : (Yes/No)");
        overspeeding = sobj.nextLine();

        Ass55_4 aobj = new Ass55_4();
        
        iRet = aobj.FineAmount(helmet, license, overspeeding);

        if(iRet == -1)
        {
            System.out.println("Invalid Input");
        }
        else
        {
            System.out.println("Total FIne Amount : "+iRet);
        }
    }    
}
