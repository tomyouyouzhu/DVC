//Program: lab535
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;
import java.io.*;

public class lab535
{
	public static void main(String[] args) throws IOException
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		File myFile=new File("input.txt");
		Scanner in=new Scanner(myFile);
		if (!myFile.exists())
		{
			System.out.println("**ERROR: no file!");
			System.exit(0);
		}
		System.out.println("***PARTS INVENTORY***");
		System.out.print("\n");
		System.out.printf("%15s %15s\n","Part number","Description");
		System.out.printf("%15s %15s\n","-----------","-----------");
		while(in.hasNext())
		{
			for (int i = 0; i < 2; i++)
			{
				String a = in.nextLine();
				System.out.printf("%15s",a);
			}
			System.out.print("\n");
		}
		in.close();
		keyboard.close();
	}
}