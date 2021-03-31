//Program: lab722
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class lab722
{
	public static void print(double [][] arr)
	{
		for (int i = 0; i < arr.length; i++)
		{
			double sum = 0;
			System.out.print("No "+i+" student: ");
			for (int j = 0; j < arr[i].length; j++)
			{
				sum = sum + arr[i][j];
				System.out.print(arr[i][j]+" ");
			}
			System.out.printf("%s %.2f\n",". The average score of him/her is ",sum/arr[i].length);
		}
	}
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.print("How many students do you have? -> ");
		int a = keyboard.nextInt();
		while (a <= 0)
		{
			System.out.print("Error, please enter positive integer numbers. ->");
			a = keyboard.nextInt();
		}
		double [][] arr = new double [a][];
		for (int i = 0; i < a; i++)
		{
			System.out.print("How many scores does this student have? -> ");
			int b = keyboard.nextInt();
			while (b <= 0 )
			{
				System.out.print("Error, please enter positive integer numbers. ->");
				b = keyboard.nextInt();
			}
			arr[i] = new double [b];
			for (int j = 0; j < b; j++)
			{
				System.out.print("Please enter No "+(j+1)+" score. -> ");
				arr[i][j] = keyboard.nextDouble();
				while (arr[i][j] < 0)
				{
					System.out.print("Error, please enter positive integer numbers. ->");
					arr[i][j] = keyboard.nextDouble();
				}
			}
		}
		print(arr);
		keyboard.close();
	}
}