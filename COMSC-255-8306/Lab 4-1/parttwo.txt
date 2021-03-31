//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class parttwo
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double a,b,sum=0;
		int c;
		String d;
		System.out.print("Monthly budget? --> ");
		a=keyboard.nextDouble();
		System.out.print("Number of transactions to record? --> ");
		c=keyboard.nextInt();
		System.out.println("Please enter transaction:");
		for (int i=1; i<=c; i++)
		{
			System.out.print("#"+i+" --> ");
			b=keyboard.nextDouble();
			sum=sum+b;
		}
		System.out.println("Budget: "+a);
		System.out.println("Total spending: "+sum);
		d= sum>a ? "Over budget" : "You are fine";
		System.out.println(d);
		keyboard.close();
	}
}