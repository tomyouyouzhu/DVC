//Program: lab532
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab532
{
	public static void welcome()
	{
		System.out.println("****************************************************************");
		System.out.println("*************************GUESSING GAME**************************");
		System.out.println("****************************************************************");
		System.out.println();
		System.out.println("I'll think of a number 1-15. You enter your guess, and I'll tell"); 
		System.out.println("you if you're correct, too high, or too low. When you guess the");
		System.out.println("number, I'll let you know how many guesses it took. You can play");
		System.out.println("as many times as you like. When you quit, I'll let you know what");
		System.out.println("your average number of guesses was across all game rounds.");
		System.out.println();
	}
	
	public static int ranNumber()
	{
		Random rand = new Random();
		int num = rand.nextInt(15)+1;
		return num;
	}
	
	public static int input(int guess)
	{
		Scanner keyboard = new Scanner(System.in);
		int user;
		System.out.print("Guess #"+guess+": ");
		do 
		{
			user = keyboard.nextInt();
			if (user < 1 || user > 15)
			{
				System.out.println("Out of range.");
			}
		}while (user < 1 || user > 15);
		return user;		
	}
	
	public static int judge(int ai, int user, int guess)
	{
		if (ai - user > 0)
		{
			System.out.print("Too low.");
			return -1;
		}
		else if (ai - user < 0)
		{
			System.out.print("Too high.");
			return 1;
		}
		else 
		{
			System.out.println("Correct! That took you "+(guess-1)+" tries.");
			return 0;
		}
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		int round = 1, user;
		char choice;
		String m;
		welcome();
		do 
		{
			int guess = 1;
			System.out.println();
			System.out.printf("***ROUND #%s***\n",round);
			System.out.print("I'm thinking of a number 1-15.");
			int ai = ranNumber();
			do 
			{
				user = input(guess);
				guess++;
				//judge(ai, user, guess);
			}while (judge(ai, user, guess)!=0);
			round++;
			System.out.print("Would you like to run the game again? Y/N --> ");
			do 
			{
				choice = keyboard.next().charAt(0);
				m = Character.toString(choice);
				if (m.equalsIgnoreCase("Y") || m.equalsIgnoreCase("N"))
					break;
				else 
					System.out.print("Please enter Y/N ");
			}while (!m.equalsIgnoreCase("Y") && !m.equalsIgnoreCase("N"));
		}while (m.equalsIgnoreCase("Y") );
		keyboard.close();
	}
}