//Program: Ch5quiz
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class Ch5quiz
{
	public static double cal(double a, double b, String c)
	{
		if (c.equals("+"))
			return a+b;
		else if (c.equals("-"))
			return a-b;
		else if (c.equals("*"))
			return a*b;
		else 
			return a/b;
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		char e = 'y';
		while (e != 'N' && e!='n')
		{
			System.out.printf("%s\n","> This program will ask you for two numbers and an");
			System.out.printf("%s\n","> operator (such as +, -) and generate the results.");
			System.out.printf("%s","> Enter two numbers separated by a space > ");
			double a = keyboard.nextDouble();
			double b = keyboard.nextDouble();
			System.out.printf("%s","> Enter the operator you want (+, -, *, /) > ");
			String c = keyboard.next();
			while (!c.equals("+") && !c.equals("-") && !c.equals("*") && !c.equals("/"))
			{
				System.out.print("> Please enter (+, -, *, /) > ");
				c = keyboard.next();
			}
			double d = cal(a,b,c);
			System.out.printf("> %.2f %s %.2f = %.2f \n",a,c,b,d);
			System.out.printf("%s","> Another problem? > ");
			e = keyboard.next().charAt(0);
			while (e != 'Y' && e != 'y' && e != 'N' && e != 'n')
			{
				System.out.print("> Error: Y/N only > ");
				e = keyboard.next().charAt(0);
			}
		}
		keyboard.close();
	}
}