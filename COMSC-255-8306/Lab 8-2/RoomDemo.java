//Program: roomdemo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class RoomDemo {
	public static void main(String[] args) {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please enter the length and width of the room: \n");
		System.out.print("Length: ");
		double a = keyboard.nextDouble();
		System.out.print("Width: ");
		double b = keyboard.nextDouble();
		RoomDimension m = new RoomDimension(a, b);
		System.out.print("Please enter the the unit cost of flooring: ");
		double c = keyboard.nextDouble();
		RoomFlooring n = new RoomFlooring(m, c);
		System.out.println(n.to_string());
		keyboard.close();
	}
}