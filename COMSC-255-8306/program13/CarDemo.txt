//Program: CarDemo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class CarDemo {
	public static void printArr(ArrayList<Car> a) {
		if (a.size() == 0) {
			System.out.println("The collection is empty!");
		}
		for (int i = 0; i < a.size(); i++) {
			System.out.println((i+1)+": "+a.get(i).getYear()+" "+a.get(i).getMake());
		}
	}
	public static void printArrSpeed(ArrayList<Car> a) {
		if (a.size() == 0) {
			System.out.println("The collection is empty!");
		}
		for (int i = 0; i < a.size(); i++) {
			System.out.println((i+1)+": "+a.get(i).getYear()+" "+a.get(i).getMake()+" "+a.get(i).getSpeed()+" MPH.");
		}
	}
	public static void printAACar (ArrayList<Car> a) {
			if (a.size() == 0) {
				System.out.println("The collection is empty!");
			}
			int num = 0;
			for (int i = 0; i < a.size(); i++) {
				if (a.get(i).getSpeed() > 0)
					System.out.println((i+1)+": "+a.get(i).getYear()+" "+a.get(i).getMake()+" "+a.get(i).getSpeed()+" MPH.");
			}
		}
	public static void main(String[] args) {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		ArrayList<Car> arr = new ArrayList<>();
		int choice = 0;
		while (choice != 6) {
			System.out.println("> MAIN MENU");
			System.out.println("> 1: add car to collection");
			System.out.println("> 2: delete car from collection");
			System.out.println("> 3: print current collection");
			System.out.println("> 4: accelerate a car in the collection");
			System.out.println("> 5: decelerate a car in the collection");
			System.out.println("> 6: quit");
			System.out.print("> Your choice: ");
			choice = keyboard.nextInt();
			System.out.println();
			while (choice > 6 || choice < 1) {
				System.out.print("> Please enter a number in the range: ");
				choice = keyboard.nextInt();
			}
			if (choice == 1) {
				System.out.println();
				System.out.print("> Please enter the make of the car: ");
				keyboard.nextLine();
				String make = keyboard.nextLine();
				System.out.print("> Please enter the year of the car: ");
				int year = keyboard.nextInt();
				Car a = new Car(make, year);
				arr.add(a);
				System.out.println();
			}
			if (choice == 2) {
				int choice2 = 0;
				System.out.println();
				System.out.println("> Deleting car...");
				System.out.println("> Which car to delete? Enter its number.");
				printArr(arr);
				if (arr.size() > 0) {
					System.out.print("> Choice: ");
					choice2 = keyboard.nextInt();
					while (choice2 > arr.size() || choice2 < 1) {
						System.out.print("> Please enter a number in the range: ");
						choice2 = keyboard.nextInt();
					}
					arr.remove(choice2 - 1);
				}
			}
			if (choice == 3) {
				System.out.println();
				System.out.println("> Current car collection and speed:");
				printArrSpeed(arr);
				System.out.println();
			}
			if (choice == 4) {
				int choice3 = 0;
				System.out.println();
				System.out.println("> Accelerating car..");
				if (arr.size() > 0) {
					System.out.println("> Which car to accelerate? Enter its number.");	
					printArr(arr);
					System.out.print("> Choice: ");
					choice3 = keyboard.nextInt();
				}
				else {
					System.out.println("The collection is empty!");
					System.out.println();
				}
				while (choice3 > arr.size() || choice3 < 1) {
					System.out.print("> Please enter a number in the range: ");
					choice3 = keyboard.nextInt();
				}
				arr.get(choice3 - 1).accelerate();
			}
			if (choice == 5) {
				int choice4 = 0;
				System.out.println();
				System.out.println("> Decelerating car..");
				if (arr.size() > 0) {
					int on = 0;
					for (int i = 0; i < arr.size(); i++) {
						if (arr.get(i).getSpeed() > 0) {
							on++;
						}
					}	
					if (on > 0) {
						System.out.println("> Which car to decelerate? Enter its number.");	
						printAACar(arr);
						System.out.print("> Choice: ");
						choice4 = keyboard.nextInt();
						while (choice4 > arr.size() || choice4 < 1) {
							System.out.print("> Please enter a number in the range: ");
							choice4 = keyboard.nextInt();
						}
						if (arr.get(choice4 - 1).getSpeed() > 0) {
							arr.get(choice4 - 1).brake();
						}
					}
					else {
						System.out.println("> There is no car on road.");
						System.out.println();
					}	
				}			
				if(arr.size() == 0) {
					System.out.println("The collection is empty!");	
					System.out.println();			
				}
			}
		}
		System.out.println();
		System.out.println("> Program done!");
		keyboard.close();
	}
}