//Program: lab533
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class lab533
{
	public static void welcome()
	{
		System.out.println("Welcom to the sum game.");
		System.out.println();
	}
	
	public static boolean even(int a)
	{
		if (a%2==0)
			return true; 
		return false;
	}
	
	public static int ask ()
	{
		Scanner keyboard = new Scanner(System.in);
		int use;
		System.out.print("To do even sum enter 1, To do odd sum enter 2 :");
		do 
		{
			use = keyboard.nextInt();
			if (use != 1 && use !=2)
				System.out.print("Please enter 1 to sum even, 2 to sum odd.");
		}while (use != 1 && use != 2);
		return use;
	}
	
	public static int input()
	{
		Scanner keyboard = new Scanner(System.in);
		int a;
		System.out.print("Please enter a number 100-200 inclusive: ");
		do 
		{
			a = keyboard.nextInt();
			if (a < 100 || a > 200)
				System.out.print("Please enter a number 100-200: ");
		}while (a < 100 && a > 200);
		return a;
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		welcome();
		char n;
		String m;
		do
		{ 
			int number = input();
			int choice = ask();
			int sum = 0;
			if (choice == 1)
			{
				for (int i = 2; i <= number; i++)
				{
					if (even(i))
					{
						sum = sum + i;
					}
				}
				System.out.println("The sum of even numbers from 0 to "+ number+" is "+sum);
			}
			if (choice == 2)
			{
				for (int i = 1; i <= number; i++)
				{
					if (!even(i))
					{
						sum = sum + i;
					}
				}
				System.out.println("The sum of odd numbers from 0 to "+ number+" is "+sum);
			}
			System.out.print("Do you want to do one more time? --> ");
			do 
			{
				n = keyboard.next().charAt(0);
				m = Character.toString(n);
				if (!m.equalsIgnoreCase("Y") && !m.equalsIgnoreCase("N"))
					System.out.print("Please enter Y/N -->");
			}while (!m.equalsIgnoreCase("Y") && !m.equalsIgnoreCase("N"));
			if (m.equalsIgnoreCase("N"))
			{
				System.out.println("Have a nice day.");
				break;
			}
		}while (m.equalsIgnoreCase("Y"));
		keyboard.close();
	}
}