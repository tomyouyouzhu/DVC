//Program: TestScoresDemo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class TestScoresDemo
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		TestScores nu = new TestScores();
		double arr[] = {0, 0, 0};
		for(int i = 0; i < 3; i++)
		{
			System.out.print("Please enter No "+i+"score, enter -1 to quit : ");
			double b = keyboard.nextDouble();
			if (b == -1)
				break;	
			else 
				arr[i] = b;		
		}
		nu.setScore(arr[0],arr[1],arr[2]);
		System.out.printf("%s %.2f","The average score is ",nu.getAve());
		keyboard.close();
	}
}