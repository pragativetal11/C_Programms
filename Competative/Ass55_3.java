/*

    
*/

package Advanced_LB;

import java.util.Scanner;

class Ass55_3
{
    int StockMarket(int stock, int quantity)
    {
        if(stock < 0)
        {
            System.out.println("Invalid Input");
            return -1;
        }

        if(quantity <= 0)
        {
            System.out.println("Invalid Quantity");
            return -1;
        }
        if(quantity > stock)
        {
            return -1;
        }
        else
        {
            stock = stock - quantity;
        }
        return stock;
        
    }
    

    public static void main(String A[])
    {
        int Stock = 0;
        int Quantity = 0;

        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Current Stock : ");
        Stock = sobj.nextInt();

        System.out.println("Enter Quantity of stock : ");
        Quantity = sobj.nextInt();

        Ass55_3 aobj = new Ass55_3();
        iRet = aobj.StockMarket(Stock, Quantity);

        if(iRet == -1)
        {
            System.out.println("Order Failed : Insufficient Stock");
        }
        else
        {
            System.out.println("Order Processed Successfully");
            System.out.println("Remaining Stock : "+iRet);
            if(iRet < 5)
            {
                System.out.println("Low Alert Stock");
            }
        }
        
    }    
}
