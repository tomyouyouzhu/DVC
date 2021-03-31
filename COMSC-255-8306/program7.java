//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;
import java.util.Random;
import java.io.*;

public class program7
{
	public static void main(String[] args) throws IOException
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Random rand = new Random();
		System.out.println("This program will generate a *bunch* of random numbers, write them to");
		System.out.println("an external file, read those numbers from that same file, and generate");
		System.out.println("and report statistics.");
		System.out.println();
		System.out.println("Generating between 10,000 and 25,000 random numbers (range: 1000-100,000)...");
		int y = rand.nextInt(15001)+10000;//random a size number 
		System.out.println("...done.");
		System.out.println();
		System.out.print("Enter the file name: ");
		String a=keyboard.nextLine();// enter file name to save and read
		System.out.println();
		PrintWriter outputFile = new PrintWriter(a);//output file
		for (int i=0; i<y; i++)// loop for creating y numbers and write them in file
		{
			int x=rand.nextInt(99001)+1000;//random new number 
			outputFile.println(x);// write number in file
		}
		outputFile.close();
		System.out.println("Analyzing randoms and compiling statistics..");
		File myFile=new File(a);
		Scanner inputFile=new Scanner(myFile);//input file
		int sum=0,counter=0,cforodd=0,cforeven=0,high=0,low=1000000000;//critical variables
		while (inputFile.hasNext())//reading file
		{
			int z=inputFile.nextInt();//get a number
			if (z>high)
				high=z;//find the greatest one
			if (z<low)
				low=z;//find the lowest one
			sum=sum+z;//sum
			counter++;//number of numbers
			if (z%2==0)
			{
				cforeven++;//number of even numbers
			}
			else 
				cforodd++;//number of odd numbers
		}
		inputFile.close();
		System.out.println("...done.");
		System.out.println();
		System.out.println("Random number statistics...");
		System.out.printf("%20s %,20d\n","Number of randoms: ",counter);
		System.out.printf("%20s %,20d\n","Sum: ",sum);
		System.out.printf("%20s %,20.2f\n","Average: ",(double)sum/counter);
		System.out.printf("%20s %,20d\n","Odds: ",cforodd);
		System.out.printf("%20s %20.2f%%\n","Odd pct: ",(double)100*cforodd/counter);
		System.out.printf("%20s %,20d\n","Evens: ",cforeven);
		System.out.printf("%20s %20.2f%%\n","Even ptc: ",(double)100*cforeven/counter);
		System.out.printf("%20s %,20d\n","Hightest: ",high);
		System.out.printf("%20s %,20d\n","Lowest: ",low);
		System.out.println();
		System.out.println("Program ending.");
		keyboard.close();
	}
}