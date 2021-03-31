//Program: RetailltemDemo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class RetailltemDemo
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Retailltem a = new Retailltem("jacket", 12, 59.95);
		Retailltem b = new Retailltem("Designer jeans", 40, 34.95);
		Retailltem c = new Retailltem("Shirt", 20, 24.95);
		System.out.printf("%s,%s,%s\n",a.getD(),a.getU(),a.getP());
		System.out.printf("%s,%s,%s\n",b.getD(),b.getU(),b.getP());
		System.out.printf("%s,%s,%s\n",c.getD(),c.getU(),c.getP());
		keyboard.close();
	}
}