//Program: 713
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;
import java.io.*;

public class lab713
{
	public static void main(String[] args) throws IOException
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		File file = new File("movie.txt");
		Scanner infile = new Scanner(file);
		int count = 0;
		while (infile.hasNext())
		{
			String input = infile.nextLine();
			count++;
		}
		infile.close();
		Scanner infile2= new Scanner(file);
		String[] movie = new String[count];
		count = 0;
		while (infile2.hasNext())
		{
			movie[count] = infile2.nextLine();
			count++;
		}
		infile.close();
		for (String a : movie)
			System.out.print(a+" ");
		keyboard.close();
	}
}