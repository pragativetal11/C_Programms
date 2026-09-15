/*

    
*/

package Advanced_LB;

import java.util.Scanner;

class Ass55_1
{
    int CountPanelty(int iNo)
    {
        int iPanelty = 0;

        if(iNo < 0)
        {
            System.out.println("Invalid Input");
            return -1;
        }
        
        if(iNo <= 2)
        {
            iPanelty = 20;
        }
        else
        {
            iPanelty = 10 * iNo;

             if(iNo > 10)
            {
                iPanelty = iPanelty + 50;
            }
        }

        return iPanelty;
    }

    public static void main(String A[])
    {
        int hours = 0;
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Total Parking hours : ");
        hours = sobj.nextInt();

        Ass55_1 aobj = new Ass55_1();
        iRet = aobj.CountPanelty(hours);

        System.out.println("Total Parking Duration : " + hours + " hours ");
        System.out.println("Total Parking Fee : Rs." + iRet);
    }    
}
