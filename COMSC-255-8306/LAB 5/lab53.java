//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;
import java.io.*;

public class lab53
{
	public static void main(String[] args) throws IOException
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Random rand=new Random();
		System.out.print("Enter file name: ");
		String s=keyboard.nextLine();
		System.out.println();
		PrintWriter out = new PrintWriter(s);
		int lar=0,sma=1000;
		for (int i=0; i<10; i++)
		{
			for (int j=0; j<10; j++)
			{
				int a=rand.nextInt(501)+500;
				if (a>lar)
					lar=a;
				if (a<sma)
					sma=a;
				out.print(a+" ");
			}
			out.println();
		}
		System.out.println("Largest: "+lar);
		System.out.println("Smallest: "+sma);
		out.close();
		keyboard.close();
	}
}