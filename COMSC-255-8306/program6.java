//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class program6
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		int x;
		System.out.println("*******************************************************");
		System.out.println("*******************SQUARE GENERATOR********************");
		System.out.println("*******************************************************");
		System.out.println("This program will let you enter an integer between");
		System.out.println("3-15 and print out that many squares of that dimension.");
		System.out.println();
		char c;
		do 
		{
			System.out.print("Enter the square size --> ");
			x=keyboard.nextInt();
			while(x<3 || x>15)
			{
				System.out.print("ERROR: select a number between 3-15 inclusive: ");
				x=keyboard.nextInt();
			}
			System.out.println();
			for (int z=0; z<x; z++)
			{
				for (int j=0; j<x; j++)
				{
					for (int i=0; i<x; i++)
					{
						System.out.print("X"+" ");
					}
					System.out.println();
				}
				System.out.println();
			}
			do 
			{
				System.out.print("Would you like to tun the program again? Y/N --> ");
				c=keyboard.next().charAt(0);
			}while (Character.toUpperCase(c)!='Y' && Character.toUpperCase(c)!='N');
		}while (Character.toUpperCase(c)=='Y');
		System.out.println();
		System.out.println("Program ending. Have a gread day.");
		System.out.println();
		keyboard.close();
	}
}