//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class quiz
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double a;//input temperature
		String b,c;//string for output
		System.out.println("***FREEZING AND BOILING POINTS***");
		System.out.println("Enter a temperature (F), and you'll find which substances are frozen and which are boiling.");
		System.out.println();
		System.out.print("Enter a temperature --> ");
		a=keyboard.nextDouble();//get input
		System.out.println();
		System.out.println("At a temperature of "+a+" these substances are frozen:");
		c= (a<=-362) ? "Oxygen\n" : "" ;//checking
		System.out.print(c);
		c= (a<=-173) ? "Ethyl Alcohol\n" : "" ;//checking
		System.out.print(c);
		c= (a<=-38) ? "Mercury\n" : "" ;//checking
		System.out.print(c);
		c= (a<=32) ? "Water\n" : "" ;//checking
		System.out.print(c);
		b= (c.length()==0) ? "None\n" : "";//check the string c is empty 
		System.out.print(b);
		System.out.println();
		System.out.println("At a temperature of "+a+" these substances are boiling:");
		c= (a>=676) ? "Mercury\n" : "" ;//checking
		System.out.print(c);
		c= (a>=212) ? "Water\n" : "" ;//checking
		System.out.print(c);
		c= (a>=172) ? "Ethyl Alcohol\n" : "" ;//checking
		System.out.print(c);
		c= (a>=-306) ? "Oxygen\n" : "" ;//checking
		System.out.print(c);
		b= (c.length()==0) ? "None\n" : "";//check the string c is empty
		System.out.print(b);
		System.out.println();
		System.out.println("***Program ending.***");
		keyboard.close();
	}
}