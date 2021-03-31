//Program: lab721
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab721
{
	public static int [][] create(int a, int b)
	{
		int[][] arr = new int[a][b];
		Random rand = new Random();
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				arr[i][j] = rand.nextInt(100)+1;
			}
		}
		return arr;
	}
	public static void print(int [][] arr)
	{
		for (int i = 0; i < arr.length; i++)
		{
			for (int j = 0; j < arr[i].length; j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please enter the array's size (a * b) -> ");
		int a = keyboard.nextInt();
		int b = keyboard.nextInt();
		while (a <= 0 || b <= 0 )
		{
			System.out.print("Error, please enter positive integer numbers. ->");
			a = keyboard.nextInt();
			b = keyboard.nextInt();
		}
		int [][] arr = new int [a][b];
		arr = create(a,b);
		print(arr);
		System.out.println("Program done.");
		keyboard.close();
	}
}