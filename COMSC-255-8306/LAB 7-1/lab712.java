//Program: 712
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab712
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Random rand = new Random();
		int[] num = new int[25];
		for (int i = 0; i < 25; i++)
		{
			num[i] = rand.nextInt(100) + 1;
		}
		int odd = 0;
		int sub = 0;
		for (int i = 0; i < 25; i++)
		{
			if ((i + 1) % 2 == 1)
			{
				odd++;
				sub = sub + num[i];
			}
		}
		System.out.print("There are "+odd+" numbers, and subtotal them is "+ sub);
		keyboard.close();
	}
}