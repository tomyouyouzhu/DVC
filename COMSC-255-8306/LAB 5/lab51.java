//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class lab51
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		int NUM_STUDENTDS=5, NUM_TEST=3;
		for (int i=0; i<NUM_STUDENTDS; i++)
		{
			int a,sum=0;
			System.out.println("INPUT GRADES FOR STIDENT #"+(i+1));
			for (int j=0; j<NUM_TEST; j++)
			{
				System.out.print("Enter score for test #"+(j+1)+"--> ");
				a=keyboard.nextInt();	
				sum=sum+a;			
			}
			System.out.printf("%s %.2f\n","Student #"+(i+1)+" overage: ",(double)sum/NUM_TEST);
			System.out.println();
		}
		keyboard.close();
	}
}