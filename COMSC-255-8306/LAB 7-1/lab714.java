//Program: 714
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab714
{
	public static int big(int[] a)
	{
		int big = a[0];
		for (int i = 0; i < a.length; i++)
		{
			if(a[i] > big)
				big = a[i];
		}
		return big;
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Random rand = new Random();
		int[] num = new int[10];
		int[] num2 = new int[10];
		for (int i = 0; i < 10; i++)
		{
			num[i] = rand.nextInt(100) + 1;
			num2[i] =rand.nextInt(100) + 1;
		}
		System.out.println("The biggest number in the first array is "+big(num));
		System.out.println("The biggest number in the second array is "+big(num2));
		keyboard.close();
	}
}