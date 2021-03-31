//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class partthree
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double a,sum=0;
		int b=0;;
		System.out.print("Enter grade, -99 to quit: ");
		a=keyboard.nextDouble();
		b= a!=-99 ? b+1 : b;
		sum= a!=-99 ? sum+a : sum;
		while (a!=-99)
		{
			System.out.print("Enter next grade, -99 to quit: ");
			a=keyboard.nextDouble();
			sum= a!=-99 ? sum+a : sum;
			b= a!=-99 ? b+1 : b;
		}
		System.out.println("Number of tests: "+b);
		System.out.println("Average: "+(double)sum/b);
		System.out.println("Have a good day.");
		keyboard.close();
	}
}