//Program: 716
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab716
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Random rand = new Random();
		int[] num = new int[100];
		int[] num2 = new int[100];
		for (int i = 0; i < 100; i++)
		{
			num[i] = rand.nextInt(100) + 1;
		}
		for (int i = 0; i < 100; i++)
		{
			num2[i] = num[i];
		}
		for (int a : num2)
			System.out.print(a+" ");
		keyboard.close();
	}
}