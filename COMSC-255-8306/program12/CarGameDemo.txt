//Program: CarGameDemo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class CarGameDemo
{
	public static int[] intToArry(int num)
	{
		int [] arr = new int [5];
		arr[4] = num % 10;
		arr[3] = num / 10 % 10;
		arr[2] = num / 100 % 10;
		arr[1] = num / 1000 % 10;
		arr[0] = num / 10000 % 10;
		return arr;
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Random rand = new Random();
		int price = rand.nextInt(44444) + 10000;
		int [] p = new int [5];
		p = intToArry(price);
		CarGame a = new CarGame(p);
		System.out.print("Please enter the price-> ");
		int guess = keyboard.nextInt();
		while (guess < 10000 || guess > 99999)
		{
			System.out.print("Please enter a five digits number -> ");
			guess =keyboard.nextInt();
		}
		int [] g = new int [5];
		g = intToArry(guess);
		int count = a.check(g);
		if (count == 5)
		{
			System.out.println("YOU WIN A GRAND PRICE!");
		}
		else 
		{
			System.out.println("You have "+count+" digits match.\n"+"The correct price is $"+price);
		}
		keyboard.close();
	}
}