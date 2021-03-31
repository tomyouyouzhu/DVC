//Program: 717
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab717
{
	public static boolean judge(int[] a, int[] b)
	{
		if (a.length != b.length)
			return false;
		else 
		{
			for (int i = 0; i < a.length; i++)
			{
				if (a[i] != b[i])
					return false;
			}
		}
		return true;
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Random rand = new Random();
		int[] num = new int[5];
		int[] num2 = new int[5];
		for (int i = 0; i < 5; i++)
		{
			num[i] = rand.nextInt(100) + 1;
			num2[i] =rand.nextInt(100) + 1;
		}
		if(judge(num, num2))
			System.out.print("They are equal.\n");
		if(!judge(num, num2)) 
			System.out.print("They are not equal.\n");
		keyboard.close();
	}
}