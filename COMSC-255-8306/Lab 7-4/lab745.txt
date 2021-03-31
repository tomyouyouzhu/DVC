//Program: lab745
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab745
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Random rand = new Random();
		final int max = 100;
		int large, small, sum = 0;
		ArrayList<Integer> arr = new ArrayList<> (max);
		ArrayList<Integer> arr2 = new ArrayList<> (max);
		for (int i = 0; i < max; i ++) {
			arr.add(rand.nextInt(100));
		}
		large = small = arr.get(0);
		for (int i = 0; i < max; i ++) {
			if (arr.get(i) > large)
				large = arr.get(i);
			if (arr.get(i) < small)
				small = arr.get(i);
			sum = sum + arr.get(i);
		}
		System.out.println("The largest number is "+ large);
		System.out.println("The smallest number is "+ small);
		System.out.println("The sum of numbers is "+sum);
		keyboard.close();
	}
}