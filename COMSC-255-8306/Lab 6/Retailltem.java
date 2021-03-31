//Program: Retailltem
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;
import java.nio.charset.*;

public class Retailltem
{
	private String description;
	private int unitsOnHand;
	private double price;
	
	Retailltem(String a, int b, double c)
	{
		description = a;
		unitsOnHand = b;
		price = c;
	}
	
	public void setD(String a)
	{
		description = a;
	}
	
	public void setU(int a)
	{
		unitsOnHand = a;
	}
	public void setP(double a)
	{
		price = a;
	}
	public String getD()
	{
		return description;
	}
	
	public int getU()
	{
		return unitsOnHand;
	}
	
	public double getP()
	{
		return price;
	}
}