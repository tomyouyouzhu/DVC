//Program: lab531
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;
import javax.print.*;

public class lab531
{
	public static void welcome()
	{
		System.out.println("*******************************************************************");
		System.out.println("**********************Dice Statistics******************************");
		System.out.println("*******************************************************************");
		System.out.println();
		System.out.println("This program will simulate dice rolls and calculate the percentages"); 
		System.out.println("of each possible outcome. You input how many dice throws you'd like in");
		System.out.println("each round. You can repeat and do another round, or quit when done.");
		System.out.println();
	}
	
	public static int asknumber(int round)
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.print("How many dice throws do you want to do for round #"+round+"? --> ");
		int number = keyboard.nextInt();
		return number;
	}
	
	public static void rolldice(int number, int round)
	{
		Random rand = new Random();
		int n2=0, n3=0, n4=0, n5=0, n6=0, n7=0, n8=0, n9=0, n10=0, n11=0, n12=0;
		for (int i = 0; i < number; i++)
		{
			int dice1 = rand.nextInt(6)+1;
			int dice2 = rand.nextInt(6)+1;
			if (dice1 + dice2 == 2)
				n2++;
			else if (dice1 + dice2 == 3)
				n3++;
			else if (dice1 + dice2 == 4)
				n4++;
			else if (dice1 + dice2 == 5)
				n5++;
			else if (dice1 + dice2 == 6)
				n6++;
			else if (dice1 + dice2 == 7)
				n7++;
			else if (dice1 + dice2 == 8)
				n8++;
			else if (dice1 + dice2 == 9)
				n9++;
			else if (dice1 + dice2 == 10)
				n10++;
			else if (dice1 + dice2 == 11)
				n11++;
			else 
				n12++;
		}
		int array[]={n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12};
		System.out.println("Statistics for round #"+round+":");
		System.out.printf("%10s %10s %10s\n","Roll","Count","Pct");
		System.out.printf("%10s %10s %10s\n","----","-----","---");	
		for (int i = 0; i < 11; i++)
		{
			System.out.printf("%10s %10s %10.2f%%\n",(i+2),array[i],(double)100*array[i]/number);
		}
		System.out.println();
	}
	
	public static String again()
	{
		Scanner keyboard = new Scanner(System.in);
		String yesorno;
		do 
		{
			System.out.print("Would you like to run another simulation? Y/N -->");
			char result = keyboard.next().charAt(0);
			System.out.println();
			yesorno = Character.toString(result);
			if (yesorno.equalsIgnoreCase("Y") || yesorno.equalsIgnoreCase("N"))
				break;	
			else 
				System.out.println("Please enter yes or no Y/N:");
		}while (!yesorno.equalsIgnoreCase("Y") || !yesorno.equalsIgnoreCase("N"));		
		return yesorno;
	}
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		int round=1;
		String yesorno;
		do 
		{
			welcome();
			rolldice(asknumber(round),round);		
			yesorno = again();
			if (yesorno.equalsIgnoreCase("Y"))
				round++;
			else
			{
				System.out.println();
				System.out.println("Program ending. Have a fantastic day.");
				break;
			}
		}while (yesorno.equalsIgnoreCase("Y"));
		keyboard.close();
	}
}