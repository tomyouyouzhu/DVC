import java.util.Scanner;
public class program2
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		int number;
		double purchaseprice,sellprice,commission,buytotal,selltotal;
		System.out.println("***Mutual Fund Profits***");
		System.out.println("This program will calculate your profit/loss on mutual funds transactions.");
		System.out.print("Enter the number of shares purchased: ");
		number=keyboard.nextInt();
		System.out.print("Enter the purchase price per share: ");
		purchaseprice=keyboard.nextDouble();
		System.out.print("Enter the selling price per share: ");
		sellprice=keyboard.nextDouble();
		System.out.print("Enter the commission percentage in decimal form, e.g. 2.5% enter '2.5': ");
		commission=keyboard.nextDouble();
		buytotal=number*purchaseprice+0.01*commission*number*purchaseprice;
		selltotal=sellprice*number*(1-0.01*commission);
		System.out.println("\n"+"Calculations:");
		System.out.printf("Commission rate: %,.2f",commission);
		System.out.println("%");
		System.out.println("Number of shares: "+number);
		System.out.printf("Purchase price: $%,.2f\n",purchaseprice);
		System.out.printf("Purchase commission: $%.2f\n",purchaseprice*commission*0.01);
		System.out.printf("Total purchase cost: $%,.2f\n",buytotal);
		System.out.printf("Selling price: $%,.2f\n",sellprice);
		System.out.printf("Selling commission: $%.2f\n",sellprice*commission*0.01);
		System.out.printf("Total selliung proceeds: $%,.2f\n",selltotal);
		System.out.printf("Net profit/loss: $%,.2f\n",(selltotal-buytotal));
	}
}