//Program: lab522
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab522
{
	public static void main(String[] args)
	{
		int odd=0,even=0;
		int MAX=100;
		for (int i=0; i<MAX; i++)
		{
			if ( isEven(random()) )
				even++;
			else 
				odd++;
		}
		System.out.printf("number of even is %s , and the percentage is %.2f%% \n", even, (double)100*even/MAX);
		System.out.printf("number of odd is %s , and the percentage is %.2f%% \n", odd, (double)100*odd/MAX);
	}
	
	public static boolean isEven (int n)
	{
		if (n%2 == 0)
			return true;
		return false;
	}
	
	public static int random()
	{
		Random rand = new Random();
		return rand.nextInt(100);
	}
}