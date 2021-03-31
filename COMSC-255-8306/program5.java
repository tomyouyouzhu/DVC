//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;
import java.util.Random;//for random

public class program5
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Random rand=new Random();// random object
		System.out.println("*****COIN FLIP SIMULATOR********");
		System.out.println("");
		System.out.println("This program will let you enter the number of coin tosses you'd");
		System.out.println("like to make, and then tell you what the heads/tails distribution is.");
		System.out.println("");
		char c;
		do 
		{
			System.out.print("How many tosses would you like? ");
			int b=keyboard.nextInt();//how many coins
			System.out.println("");
			System.out.println("***Coin Toss Results***");
			int head=0,a;// number of head tail and random
			for (int i=0; i<b; i++)//loop for roll coins
			{
				a=rand.nextInt(2);//random
				if (a==0)//if head
					head++;//head++
			}
			System.out.printf("%8s %20s\n", "Flips:",b);
			System.out.printf("%5s %20s / %.2f%%\n", "# Heads:",head,(double)100*head/b);//out print with format
			System.out.printf("%5s %20s / %.2f%%\n", "# Tails:",(b-head),(double)100*(b-head)/b);//out print with format
			System.out.println("");
			System.out.println("Program ending. Have a great day.");
			System.out.println("");
			System.out.print("Do you want to play again? ('Y' for yes, others for no): ");
			c=keyboard.next().charAt(0);//if play again.
			System.out.println("");
		}while(Character.toUpperCase(c)=='Y');//do while loop
		keyboard.close();
	}
}