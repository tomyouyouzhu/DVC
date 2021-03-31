//Program: lab523
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;
import java.io.*;

public class lab524
{
	public static void main(String[] args) throws IOException
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		PrintWriter out = new PrintWriter("prime");
		int a;
		do 
		{
			System.out.print("Please enter a rage number : ");
			a = keyboard.nextInt();
			if (a>=5000)
				System.out.println("Please enter a number less than 5000.");
		}while (a >= 5000);
		for (int i =1; i<=a; i++)
		{
			if (isPrime(i))
			{
				out.print(i+" ");
			}
		}
		out.close();
		keyboard.close();
	}
	
	public static boolean isPrime(int a)
	{
		for (int i = 2; i<a; i++)
		{
			if ( a%i == 0)
				return false; 
		}
		return true;
	}
}