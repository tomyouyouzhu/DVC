//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class Lab37
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		int a,b;
		System.out.println("**PART ONE**");
		System.out.print("Enter a double greater than 10.0: ");
		a=keyboard.nextInt();
		if (a>10)
			System.out.println("Good job!");
		else 
			System.out.println("Follow directions!");
		System.out.println("**PART TWO**");
		System.out.print("Enter a double between 10.0 - 20.0 (inclusive):  ");
		a=keyboard.nextInt();
		if (a>10 && a<20)
			System.out.println("Good job!");
		else 
			System.out.println("Follow directions!");
		System.out.println("**PART THREE**");
		System.out.print("Enter any positive or negative number: ");
		a=keyboard.nextInt();
		b=a<0 ? -100:100 ;
		System.out.println(a+" is assigned the value of "+b);
		keyboard.close();
	}
}