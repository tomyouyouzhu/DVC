//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;
import java.io.*;

public class lab56
{
	public static void main(String[] args) throws IOException
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		File myFile=new File("address.txt");
		Scanner in=new Scanner(myFile);
		System.out.print("Enter file name: ");
		String s=keyboard.nextLine();
		System.out.println();
		PrintWriter out = new PrintWriter(s);
		if (!myFile.exists())
		{
			System.out.println("**ERROR: no file!");
			System.exit(0);
		}
		int l=0;
		while (in.hasNext())
		{
			String x=in.nextLine();
			out.println(x);
			l++;
			if (l%3==0)
				out.println();
		}
		in.close();
		out.close();
		keyboard.close();
	}
}