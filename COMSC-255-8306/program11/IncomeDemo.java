//Program: IncomeDemo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class IncomeDemo
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double[] in = new double [12];
		for (int i = 0; i < 12; i++)
		{
			System.out.print("Please enter No "+(i+1)+" month income: ");
			in[i] = keyboard.nextDouble();
		}
		Income john = new Income(in);
		System.out.println("The average income is "+john.getAve());
		System.out.println("The highest income is "+john.getB());
		System.out.printf("%s %.2f","The lowest income is ",john.getS());
		keyboard.close();
	}
}