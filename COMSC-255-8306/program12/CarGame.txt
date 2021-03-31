//Program: CarGame
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class CarGame
{
	private int [] price = new int [5];
	CarGame(int arr[])
	{
		for (int i = 0; i < 5; i++)
		{
			price[i] = arr[i];
		}
	}
	public int check(int arr[])
	{
		int count = 0;
		for (int i = 0; i < 5; i++)
		{
			if (price[i] == arr[i])
			{
				System.out.println(price[i]+" "+arr[i]);
				count++;
			}
		}
		return count;
	}
}