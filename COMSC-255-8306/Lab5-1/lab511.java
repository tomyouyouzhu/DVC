//Program: lab511
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class lab511
{
	public static char showChar(String a, int b)
	{
		char c = a.charAt(b);
		return c;
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		System.out.println(showChar("new", 2));
		keyboard.close();
	}
}