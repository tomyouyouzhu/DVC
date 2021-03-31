//Program: Program 9
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class program9
{
	public static char generateP2toss()//computer function
	{
		Random rand = new Random();
		char b;
		int a=rand.nextInt(3);
		if (a==0)
			return b='r';
		else if (a==1)
			return b='p';
		else
			return b='s';
	}
	public static int checkThrow(char p1throw, char p2throw)//judge function
	{
		if (p1throw==p2throw)
			return 0;
		if((p1throw-p2throw==-1) || (p1throw-p2throw==3) || (p1throw-p2throw==-2))
			return 1;
		else 
			return 2;
	}
	public static void printStatistics(int p1wins, int p2wins, int ties, int rounds)//output 
	{
		System.out.println("Rounds: "+rounds+" | P1 wins: "+p1wins+" | Computer wins: "+p2wins+" | Ties: "+ties);
	}
	public static void finalStatistics(int p1wins, int p2wins, int ties, int rounds)//final output
	{
		System.out.printf("%s %s (%.2f%%)\n","Player 1 wins: ",p1wins,(double)100*p1wins/rounds);
		System.out.printf("%s %s (%.2f%%)\n","Computer wins: ",p2wins,(double)100*p2wins/rounds);
		System.out.printf("%s %s (%.2f%%)\n","         Ties: ",ties,(double)100*ties/rounds);
		System.out.printf("%s %s\n","       Rounds: ",rounds);
	}
	public static void welcome()//welcome
	{
		System.out.println("***ROCK, PAPER, SCISSORS GAME***");
		System.out.println();
		System.out.println("Directions: enter one of these to throw down:");
		System.out.println("r: rock");
		System.out.println("p: paper");
		System.out.println("s: scissors");
		System.out.println("q: quit and display statistics");
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		char a,s;//for user choices
		do 
		{
			int p1w=0,p2w=0,tie=0,round=0;
			welcome();
			System.out.println();
			do 
			{
				System.out.print("Rock Paper Scissors Throw! r/p/s/q --> ");
				a=keyboard.next().charAt(0);
				while (a!='r' && a!='p' && a!='s' && a!='q')//input checking
				{
					System.out.print("Rock Paper Scissors Throw! r/p/s/q --> ");
					a=keyboard.next().charAt(0);
				}
				if (a=='q')//quit critical char
					break;
				char b = generateP2toss();
				int c = checkThrow(a,b);
				round++;//round 
				if (c==0)//tie
				{
					tie++;
					System.out.println("Tie!");
				}
				if (c==1)//p1 win
				{
					p1w++;
					System.out.println("Win!");
				}
				if (c==2)//p2 win
				{
					p2w++;
					System.out.println("Lose!");
				}
				printStatistics(p1w,p2w,tie,round);//round print out
				System.out.println();
			}while (a!='Q' && a!='q');//loop for keeping playing 
			System.out.println();
			System.out.println("*************");
			System.out.println("Game results:");
			System.out.println("-------------");
			finalStatistics(p1w, p2w, tie, round);//final out print
			System.out.println();
			System.out.print("Play another game? Y/N --: ");//if play again
			s=keyboard.next().charAt(0);
		}while (s=='y');
		keyboard.close();
	}
}