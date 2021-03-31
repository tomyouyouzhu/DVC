//Program: 7-1-1
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class lab711
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double[] num = new double[10];
		for (int i = 0; i < 10; i++)
		{
			System.out.print("Enter the "+i+" number: ");
			double in = keyboard.nextDouble();
			num[i] = in;
		}
		for (double a : num)
			System.out.print(a+" ");
		keyboard.close();
	}
}