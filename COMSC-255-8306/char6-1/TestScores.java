//Program: TestScores
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class TestScores
{
	private double score1;
	private double score2;
	private double score3;
	public TestScores()
	{
		score1 = 0;
		score2 = 0;
		score3 = 0;
	}
	void setScore(double a)
	{
		score1 = a;
	}
	void setScore(double a, double b)
	{
		score1 = a;
		score2 = b;
	}
	void setScore(double a, double b, double c)
	{
		score1 = a;
		score2 = b;
		score3 = c;
	}
	double getScore(int a)
	{
		if(a == 1)
			return score1;
		else if(a == 2)
			return score2;
		else if(a == 3)
			return score3;
		else 
		{
			System.out.println("Out of range! ");
			return 0;
		}
	}
	void printScore()
	{
		System.out.println("The first score is "+score1);
		System.out.println("The second score is "+score2);
		System.out.println("The third score is "+score3);
	}
	double getAve()
	{
		return (score1+score2+score3)/3;
	}
}