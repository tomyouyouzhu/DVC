//Program: four
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class four {
	public static void main(String[] args) {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		ParkedCar car = new ParkedCar("BMW","X5","BLACK","987654",180);
		PoliceOfficer tom = new PoliceOfficer("Tom", "007");
		ParkingMeter meter = new ParkingMeter(56);
		System.out.println(tom.partrol(car, meter).toString());
		keyboard.close();
	}
}