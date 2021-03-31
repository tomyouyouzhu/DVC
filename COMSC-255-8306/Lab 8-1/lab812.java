//Program: lab812
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab812 {
	public static House creatHouse() {
		Scanner keyboard = new Scanner(System.in);
		String color;
		String type;
		int year_built;
		int bedrooms;
		double bathrooms;
		System.out.print("Please enter the color: ");
		color = keyboard.nextLine();
		System.out.print("Please enter the type: ");
		type = keyboard.nextLine();
		System.out.print("Please enter the year build: ");
		year_built = keyboard.nextInt();
		System.out.print("Please enter the number of bedrooms: ");
		bedrooms = keyboard.nextInt();
		System.out.print("Please enter the number of bathrooms: ");
		bathrooms = keyboard.nextDouble();
		return new House(color, type, year_built, bedrooms, bathrooms);
	}
	public static void main(String[] args) {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		House house = creatHouse();
		System.out.println(house.to_string());
		keyboard.close();
	}
}