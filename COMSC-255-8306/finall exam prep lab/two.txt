//Program: two
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class two {
	public static int sum (ArrayList<Integer> a) {
		int sum = 0;
		for (int i = 0; i < a.size(); i++) {
			sum = sum + a.get(i);
		}
		return sum;
	}
	public static int squared (ArrayList<Integer> a) {
		int sum = sum(a);
		return sum * sum;
	}
	public static int min (ArrayList<Integer> a) {
		int min = a.get(0);
		for (int i = 1; i < a.size(); i++) {
			if (a.get(i) < min)
				min = a.get(i);
		}
		return min;
	}
	public static int max (ArrayList<Integer> a) {
		int max = a.get(0);
		for (int i = 1; i < a.size(); i++) {
			if (a.get(i) > max)
				max = a.get(i);
		}
		return max;
	}
	public static void newArrayList(ArrayList<Integer> a) {
		a.clear();
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Let's populate the ArrayList. Enter a number : ");
		int num;
		do {
			num = keyboard.nextInt();
			if (num == -99)
				break;
			else {	
				a.add(num);
				System.out.print("Enter your next number or -99 to quit: ");
			}
		}while (num != -99);
	}
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
		do {
			System.out.println("You ArrayList is: "+arr);
			System.out.print("What would you like to do with this ArrayList? Enter: \n");
			System.out.print("1 | Sum elements\n");
			System.out.print("2 | Sum of each element squared\n");
			System.out.print("3 | Display smallest element\n");
			System.out.print("4 | Display largest element\n");
			System.out.print("5 | Create a new ArrayList and stat over\n");
			System.out.print("6 | End program\n");
			System.out.print("Chocie? -> ");
			choice = keyboard.nextInt();
			if (choice == 1)
				System.out.println("Sum of ArrayList is "+sum(arr));
			if (choice == 2)
				System.out.println("Sum of the suqare of each ArrayList element is "+squared(arr));
			if (choice == 3)
				System.out.println("The smallest element in the ArrayList is "+min(arr));
			if (choice == 4)
				System.out.println("The largest element in the ArrayList is "+max(arr));
			if (choice == 5) 
				newArrayList(arr);
			if (choice == 6)
				break;
		}while (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6);
		System.out.println("Program ending.");
		keyboard.close();
	}
}