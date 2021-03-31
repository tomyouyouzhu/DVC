//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;
import java.io.*;

public class lab52
{
	public static void main(String[] args) throws IOException
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		File myFile=new File("data.txt");
		Scanner in=new Scanner(myFile);
		if (!myFile.exists())
		{
			System.out.println("**ERROR: no file!");
			System.exit(0);
		}
		int a,sum=0,counter=0;
		System.out.println("Reading from file...your numbers are:");
		while(in.hasNext())
		{
			a=in.nextInt();
			System.out.print(a+" ");
			sum=sum+a;
			counter++;		
		}
		in.close();
		System.out.println();
		System.out.printf("%s%.1f\n","The overage of these numbers is: ",(double)sum/counter);
		keyboard.close();
	}
}