//Program: Income
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class Income
{
	private double[] income = new double[12];
	public Income(double arr[])
	{
		for (int i = 0; i < 12; i++)
		{
			income[i] = arr[i];
		}
	}
	public double getAve()
	{
		double sum = 0;
		for (int i = 0; i < 12; i++)
		{
			sum = sum + income[i];
		}
		return sum/12;
	}
	public double getB()
	{
		double big = income[0];
		for (int i = 1; i < 12; i++)
		{
			if (income[i] > big)
				big = income[i];
		}
		return big;
	}
	public double getS()
	{
		double small = income[0];
		for (int i = 1; i < 12; i++)
		{
			if (income[i] < small)
				small = income[i];
		}
		return small;
	}
}