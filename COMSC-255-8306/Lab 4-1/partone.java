//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;
import javax.print.*;

public class partone
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		int a=10,b;
		System.out.print("Enter the number "+a+" : ");
		b=keyboard.nextInt();
		while(a!=b) 
		{
			System.out.print("ERROR: only enter "+a+" : ");
			b=keyboard.nextInt();
		}
		System.out.println("Thanks for being solid.");
		keyboard.close();
	}
}