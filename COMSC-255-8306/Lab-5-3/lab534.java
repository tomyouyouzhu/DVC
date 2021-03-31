//Program: lab534
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class lab534
{
	public static void welcome()
	{
		System.out.println("Welcome to Sorta Pyramid.");
	}
	
	public static int getNumber()
	{
		Scanner keyboard = new Scanner(System.in);
		int a;
		System.out.print("Please enter a number 5-25 inclusive. -->");
		do 
		{
			a = keyboard.nextInt();
			if (a < 5 || a > 25)
				System.out.print("Please enter 2-25. -->");
		}while (a < 5 || a > 25);
		return a;
	}
	
	public static void print(int a)
	{
		for (int i = 0; i < a; i++ )
		{
			for (int j = 0; j <= i; j++)
			{
				System.out.print("* ");
			}
			System.out.print("\n");
		}
		for (int i = a - 1; i > 0; i-- )
		{
			for (int j = i; j > 0; j--)
			{
				System.out.print("* ");
			}
			System.out.print("\n");
		}
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		char user;
		do 
		{
			int number = getNumber();
			print(number);
			System.out.print("Do you want to play again? Y/N-->");
			do 
			{
				user = keyboard.next().charAt(0);
				if (user != 'Y' && user != 'y' && user != 'N' && user != 'n')
					System.out.print("Please enter Y/N -->");
			}while (user != 'Y' && user != 'y' && user != 'N' && user != 'n');
		}while (user == 'Y' || user == 'y');
		System.out.println("Have a nice day.");
		keyboard.close();
	}
}