//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;
import java.io.*;

public class lab54
{
	public static void main(String[] args) throws IOException
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		File myFile=new File("random.txt");
		Scanner in=new Scanner(myFile);
		if (!myFile.exists())
		{
			System.out.println("**ERROR: no file!");
			System.exit(0);
		}
		int counter=0;
		while(in.hasNext())
		{
			int a=in.nextInt();
			counter++;
			System.out.print(a+" ");
			if (counter%10==0)
				System.out.println();				
		}
		System.out.println();
		System.out.println("There were "+counter+" data elements.");
		in.close();
		keyboard.close();
	}
}