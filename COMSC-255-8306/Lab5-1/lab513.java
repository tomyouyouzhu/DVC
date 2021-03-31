//Program: lab513
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab513
{
	public static void welcome ()
	{
		System.out.println("Welcome!");
	}
	
	public static int choice()
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.println("Which do you want?");
		System.out.println("1 for Circle");
		System.out.println("2 for Square");
		System.out.println("3 for Rectangle");
		System.out.println("4 for Triangle");
		int a;
		do 
		{
			a = keyboard.nextInt();
		}while (a!=1 && a!=2 && a!=3 && a!=4);
		return a;		
	}
	public static double cirle()
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please enter radius: ");
		double a=keyboard.nextDouble();
		return a*a*Math.PI;
	} 
	public static double square()
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please enter side: ");
		double a=keyboard.nextDouble();
		return a*a;
	} 
	public static double rectangle()
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please enter two sides: ");
		double a=keyboard.nextDouble();
		double b=keyboard.nextDouble();
		return a*b;
	}
	public static double triangle ()
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please enter height and bottom line: ");
		double a=keyboard.nextDouble();
		double b=keyboard.nextDouble();
		return a*b/2;
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		welcome();
		int a = choice();
		if (a==1)
			System.out.println("The area is "+cirle());
		if (a==2)
			System.out.println("The area is "+square());
		if (a==3)
			System.out.println("The area is "+rectangle());
		if (a==4)
			System.out.println("The area is "+triangle());			
		keyboard.close();
	}
}