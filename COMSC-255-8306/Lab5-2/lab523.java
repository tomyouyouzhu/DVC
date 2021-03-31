//Program: lab523
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class lab523
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please enter a number : ");
		int a = keyboard.nextInt();
		isPrime(a);
		keyboard.close();
	}
	
	public static void isPrime(int a)
	{
		int flag = 1;
		for (int i = 2; i<a; i++)
		{
			if ( a%i == 0)
				flag = 0;
		}
		if (flag == 1)
			System.out.println("true");
		if (flag == 0)
			System.out.println("false.");
	}
}