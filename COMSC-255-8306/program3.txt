//Program: Program3
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class program3
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		String a,b,c;
		int x,y,z,r;
		System.out.println("This program will help you select a restaurant.");
		System.out.print("Is anyone in your party a vegetarian? (Enter yes or no): ");
		a=keyboard.nextLine();
		x=a.equalsIgnoreCase("YES")? 100 : 0;
		System.out.print("Is anyone in your party a vegan? (Enter yes or no): ");
		b=keyboard.nextLine();
		y=b.equalsIgnoreCase("YES")? 10 : 0;
		System.out.print("Is anyone in your party gluten free? (Enter yes or no): ");
		c=keyboard.nextLine();
		z=c.equalsIgnoreCase("YES")? 1 : 0;
		System.out.println("Here are your restaurant choices:");
		System.out.print("Chef`s Kitchen\n"+"Corner Cafe\n");
		r=x+y+z;
		switch (r)
		{
			case 0: 
				System.out.print("Mel's Diner\n"+"Mama's Italian\n"+"Zachary's Pizza\n");
				break;
			case 1:
				System.out.print("Zachary's Pizza\n");
				break;
			case 10:
				break;
			case 111:
				break;
			case 110:
				break;
			case 101:
				System.out.print("Zachary's Pizza\n");
				break;
			case 100:
				System.out.print("Mama's Italian\n"+"Zachary's Pizza\n");
				break;
			default :
		}
		keyboard.close();
	}
}