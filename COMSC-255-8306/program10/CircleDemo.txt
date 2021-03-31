//Program: CircleDemo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class CircleDemo
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		System.out.println("*** > CIRCLE CREATOR");
		System.out.println("*** > Enter a radius to create a circle");
		System.out.println("*** > and output calculations");
		System.out.println();
		System.out.printf("%10s %s"," ","> Enter the radius of a circle > ");
		double a = keyboard.nextDouble();
		System.out.printf("%10s %s\n"," ","> Circle object created...");
		Circle z = new Circle(a);
		System.out.printf("%10s %s %.2f\n"," ","> The circle's area is", z.area());
		System.out.printf("%10s %s %.2f\n"," ","> The circle's diameter is", z.diameter());
		System.out.printf("%10s %s %.2f\n"," ","> The circle's circumference is", z.circumference());
		keyboard.close();
	}
}