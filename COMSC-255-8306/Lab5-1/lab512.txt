//Program: lab512
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class lab512
{
	public static double calculateRetail(int a, int b)
	{
		double c = (1+(double)b/100)*a;
		return c;
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		System.out.println(calculateRetail(5,50));
		keyboard.close();
	}
}