//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;
import java.io.*;

public class lab55
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
		int counter=0,sma=1000000000,lar=-1,sum=0;
		while(in.hasNext())
		{
			int a=in.nextInt();
			sum=sum+a;
			if (a<sma)
				sma=a;
			if (a>lar)
				lar=a;
			counter++;
			System.out.print(a+" ");
			if (counter%10==0)
				System.out.println();				
		}
		System.out.println();
		System.out.println("There were "+counter+" data elements.");
		System.out.println("Total: "+sum);
		System.out.printf("%s %.1f\n","Average:",(double)sum/counter);
		System.out.println("Smallest: "+sma);
		System.out.println("Largest: "+lar);
		in.close();
		keyboard.close();
	}
}