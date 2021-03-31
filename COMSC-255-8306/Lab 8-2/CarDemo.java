//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class CarDemo {
	public static void main(String[] args) {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		CarStereo a = new CarStereo("Ok", 9);
		CarEngine b = new CarEngine("BMW" , 100 ,100);
		CarStereo a1 = new CarStereo(a);
		CarEngine b1 = new CarEngine(b);
		Car myCar = new Car("BMW", 2013, b1, a1);
		System.out.println(myCar.to_string());
		keyboard.close();
	}
}