//Program: assignment#1
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;
import java.io.*;

public class assignment1
{
	public static int rand(int max, int min)
	{
		Random rand = new Random();
		int n = rand.nextInt(max-min)+min+1;
		return n;
	}
	
	public static void main(String[] args) throws IOException
	{
		Scanner keyboard = new Scanner(System.in);
		char choice;
		do 
		{
			int number, max, min, column, width;
			String name;
			System.out.println("This program will output random numbers to a file using parameters that");
			System.out.println("the user specifies. Please enter:\n");
			System.out.printf("%20s","How many random numbers? (Range: 1-100,000): ");
			do 
			{
				number = keyboard.nextInt();
				if (number < 1 || number > 100000)
					System.out.printf("%25s","ERROR: 1-100,000 please --> ");
			} while (number < 1 || number > 100000);
			System.out.printf("%20s","Maximum random number? (Range: 10-100,000): ");
			do 
			{
				max = keyboard.nextInt();
				if (max < 10 || max > 100000)
					System.out.printf("%25s","ERROR: 10-100,000 please --> ");
			} while (max < 10 || max > 100000);
			System.out.printf("%20s","Minimum random number? (Range: 1-100,000): ");
			do 
			{
				min = keyboard.nextInt();
				if (min < 1 || min > 100000 || min > max)
					System.out.printf("%25s","ERROR: 1-100,000 and less than max only please --> ");
			} while (min < 1 || min > 100000 || min >max);
			System.out.printf("%20s","Number of columns in the output? (Range: 2-20): ");
			do 
			{
				column = keyboard.nextInt();
				if (column < 2 || column > 20)
					System.out.printf("%25s","ERROR: 2-20 please --> ");
			} while (column < 2 || column > 20);
			System.out.printf("%20s","Output column width? (Range: 8-15): ");
			do 
			{
				width = keyboard.nextInt();
				if (width < 8 || width > 15)
					System.out.printf("%25s","ERROR: 8-15 please --> ");
			} while (width < 8 || width > 15);
			System.out.print("Output filename: ");
			name = keyboard.next();
			PrintWriter outp = new PrintWriter(name);
			String format = "%" + width + "s";
			int n;
			int counter = 0;
			for (int i = 0; i < number; i++)
			{
				n = rand(max, min);
 				outp.printf(format, n);
				counter++;
				if (counter%column == 0)
					outp.print("\n");
			}
			outp.close();
			System.out.println();
			System.out.println("Output results:");
			System.out.printf("%30s %s\n","Number of randoms generated: ", number);
			System.out.printf("%30s %s\n","Maximum random: ", max);
			System.out.printf("%30s %s\n","Minimum random: ", min);
			System.out.printf("%30s %s\n","Number of output columns: ", column);
			System.out.printf("%30s %s\n","Output column width: ", width);
			System.out.printf("%30s %s\n","Output filename: ", name);
			System.out.printf("%30s %s\n","Output results: " ,"Complete");
			System.out.println();
			System.out.print("Would you like to run the program again? Y/N --> ");
			do 
			{
				choice = keyboard.next().charAt(0);
				if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
					System.out.print("Please enter Y/N --> ");
			}while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');
		} while (choice == 'Y' || choice == 'y');
		System.out.print("progran ending.");
		keyboard.close();
	}
}