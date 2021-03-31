//Program: three
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class three {
	public static void main(String[] args) {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		ArrayList<Integer> arr = new ArrayList<>();
		System.out.print("Let's populate the ArrayList. Enter a number : ");
		int num;
		do {
			num = keyboard.nextInt();
			if (num == -99)
				break;
			else {	
				arr.add(num);
				System.out.print("Enter your next number or -99 to quit: ");
			}
		}while (num != -99);
		int choice = 0;
		System.out.println("Original ArratList:");
		for (int i = 0; i < arr.size(); i++) {
			System.out.print(arr.get(i)+" ");
		}
		System.out.print("\nSelect: "+"(1) Evens\n \t(2) Odds --> ");
		choice = keyboard.nextInt();
		while (choice != 1 && choice != 2) {
			System.out.print("ERROR!");
			System.out.print("\nSelect: "+"(1) Evens\n \t(2) Odds --> ");
			choice = keyboard.nextInt();
		}
		if (choice == 1) {
			ArrayList<Integer> arrEven = new ArrayList<>();
			for (int i = arr.size() - 1; i >= 0; i--) {
				if (arr.get(i) % 2 == 0)
					arrEven.add(arr.get(i));
			}
			System.out.println("Reversed ArrayList with only evens:");
			for (int i = 0; i < arrEven.size(); i++)
				System.out.print(arrEven.get(i)+" ");
		}
		if (choice == 2) {
			ArrayList<Integer> arrOdd = new ArrayList<>();
			for (int i = arr.size() - 1; i >= 0; i--) {
				if (arr.get(i) % 2 != 0)
					arrOdd.add(arr.get(i));
			}
			System.out.println("Reversed ArrayList with only odds:");
			for (int i = 0; i < arrOdd.size(); i++)
				System.out.print(arrOdd.get(i)+" ");	
		}		
		keyboard.close();
	}
}