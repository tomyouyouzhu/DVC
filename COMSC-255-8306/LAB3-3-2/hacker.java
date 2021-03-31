//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class hacker
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double a;
		System.out.println("Enter the number of seconds, and this program will output either the number of days, hours, or minutes that will fit your input.");
		System.out.println("");
		System.out.print("Enter number of seconds: ");
		a=keyboard.nextInt();
		System.out.println("Results:");
		if (a>=86400)
		{
			System.out.printf("%.2f seconds is %.2f days.\n",a,a/86400);
		}
		else if (a>=3600)
		{
			System.out.printf("%.2f seconds is %.2f hours.\n",a,a/3600);
		}
		else if (a>=60)
		{
			System.out.printf("%.2f seconds is %.2f minutes.\n",a,a/60);
		}
		else if (a>=0)
		{
			System.out.printf("%.2f seconds is less than one minute.\n",a);
		}
		else 
		{
			System.out.println("Second cannot be negative.");
		}
		keyboard.close();
	}
}