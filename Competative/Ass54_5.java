/*

    
*/

package Advanced_LB;

import java.util.Scanner;

class Ass54_5
{
    int Discount(int amount, String MemberType)
    {
        int discount = 0;
        int FinalAmount = 0;

        if(amount <= 0 || (!"Premium".equals(MemberType)) && (!"Regular".equals(MemberType)))
        {
            System.out.println("Invalid Input");
            return -1;
        }

        if(amount > 5000)
        {
            discount = (amount * 20)/100;
            FinalAmount = amount - discount;
        }
        else if(amount > 2000)
        {
            discount = (amount * 10)/100;
            FinalAmount = amount - discount;
        }
        else
        {
            FinalAmount = amount;
        }

        if("Premium".equals(MemberType))
        {
            discount = (FinalAmount * 5)/100;
            FinalAmount = FinalAmount - discount;
        }

        return FinalAmount;
    }

    public static void main(String A[])
    {
        int amount = 0;
        String MemberType = null;
        int iRet = 0;
        int iDis = 0;
        int totalDiscount = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Purchase Amount :  ");
        amount = sobj.nextInt();

        sobj.nextLine();

        System.out.println("Enter Membership type : ");
        MemberType = sobj.nextLine();

        Ass54_5 aobj = new Ass54_5();
        iRet = aobj.Discount(amount, MemberType);

        if(iRet != -1)
        {
            totalDiscount = amount - iRet;

            System.out.println("Original Amount : " + amount);
            System.out.println("Total Discount : " + totalDiscount);
            System.out.println("Final Amount is : " + iRet);
        }
    }    
}
