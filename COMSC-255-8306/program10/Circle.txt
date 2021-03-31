//Program: circle class
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class Circle
{
	private double radius;
	private final double PI = 3.14159;
	
	public Circle(){}
	public Circle(double a)
	{
		radius = a;
	}
	public void setRadius(double a)
	{
		radius = a;
	}
	public double getRadius()
	{
		return radius;
	}
	public double area()
	{
		return PI*radius*radius;
	}
	public double diameter()
	{
		return 2*radius;
	}
	public double circumference()
	{
		return 2*PI*radius;
	}
}