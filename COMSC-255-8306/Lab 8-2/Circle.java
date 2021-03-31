//Program: circle class
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class Circle
{
	private double radius;
	private String color;
	private final double PI = 3.14159;
	
	public Circle(){}
	public Circle(double a, String b)
	{
		radius = a;
		color = b;
	}
	public void setRadius(double a)
	{
		radius = a;
	}
	public void setColor(String a)
	{
		color = a;
	}
	public void copy(Circle a) {
		radius = a.getRadius();
		color = a.getColor();
	}
	public static boolean ifsame(Circle a, Circle b) {
		if (a.getColor() == b.getColor() && a.getRadius() == b.getRadius())
			return true;
		return false;
	}
	public double getRadius()
	{
		return radius;
	}
	public String getColor()
	{
		return color;
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