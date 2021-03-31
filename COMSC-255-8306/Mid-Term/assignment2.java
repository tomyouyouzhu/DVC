//Program: assignment#2
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;
import java.io.*;

public class assignment2
{
	public static int judge (char a, char b)
	{
		if (a-b == -2 || a-b == 3 || a-b == -1)
			return 1;
		if (a == b)
			return 0;
		return 2;
	}
	public static void main(String[] args) throws IOException
	{
		//declarations
		System.out.println("This program will read an external file representing throws of");
		System.out.println("rock, paper, and scissors, and compile win/loss statistics.");
		System.out.println();
		File myFile=new File("rps.txt");
		Scanner in=new Scanner(myFile);
		if (!myFile.exists())
		{
			System.out.println("**ERROR: no file!");
			System.exit(0);
		}
		int counter = 0, onewin = 0, twowin = 0, tie = 0;
		while(in.hasNext())
		{
			char one = in.nextLine().charAt(0);
			char two = in.nextLine().charAt(0);
			counter++;
			if (judge(one, two) == 1)
				onewin++;
			if (judge(one, two) == 2)
				twowin++;
			if (judge(one, two) == 0)
				tie++;
		}
		System.out.println("Game file processed. Results: ");
		System.out.printf("%20s %s\n","Number of throws: ",counter);
		System.out.printf("%20s %s/%.2f%%\n", "Player 1 wins: ", onewin, (double)100*onewin/counter);
		System.out.printf("%20s %s/%.2f%%\n", "Player 2 wins: ", twowin, (double)100*twowin/counter);
		System.out.printf("%20s %s/%.2f%%\n", "Ties: ", tie, (double)100*tie/counter);
	}
}