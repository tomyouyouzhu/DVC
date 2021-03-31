//Program: 715
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab715
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Random rand = new Random();
		int[] num = new int[100];
		for (int i = 0; i < 100; i++)
		{
			num[i] = rand.nextInt(100) + 1;
		}
		int big = num[0];
		int small = num[0];
		int sum = 0;
		for (int i = 0; i < 100; i++)
		{
			if (num[i] > big)
				big = num[i];
			if (num[i] < small)
				small = num[i];
			sum = sum + num[i];
		}
		System.out.print("The biggest value is "+big+". The smallest value is "+small+". The sum is "+sum+".");
		keyboard.close();
	}
}