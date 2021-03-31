//Program: lab813
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab813 {
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
		System.out.print("How many houses? ->");
		int num = keyboard.nextInt();
		House[] arr = new House[num];
		for (int i = 0; i < num; i++) {
			arr[i] = creatHouse();
		}
		for (int i = 0; i < num; i++) {
			System.out.println(arr[i].to_string());
		}
		keyboard.close();
	}
}