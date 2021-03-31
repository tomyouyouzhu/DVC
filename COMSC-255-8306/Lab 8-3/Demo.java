//Program: demo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class Demo {
	public static void main(String[] args) {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		System.out.print("What do you want to but? -> ");
		String goods = keyboard.nextLine();
		System.out.print("How many "+goods+" do you want to byu? -> ");
		int num = keyboard.nextInt();
		while (num < 0) {
			System.out.print("Impossiable number. Please enter again. -> ");
			num = keyboard.nextInt();
		}
		System.out.print("How much each one? -> ");
		double price = keyboard.nextDouble();
		while (price < 0) {
			System.out.print("Impossiable number. Please enter again. -> ");
			price = keyboard.nextDouble();
		}
		RetailItem a = new RetailItem(goods, num, price);
		CashRegister b = new CashRegister(a, num);
		System.out.print("SALES RECEIPT\n");
		System.out.print("Unit price: $"+a.getPrice()+"\n");
		System.out.print("Quantity: "+a.getUnitsOnHand()+"\n");
		System.out.printf("Subtotal: $%.2f \n",b.getSubtotal());
		System.out.printf("Tax: $%.2f\n",b.getTax());
		System.out.printf("Total: $%.2f\n", b.getTotal());
		keyboard.close();
	}
}