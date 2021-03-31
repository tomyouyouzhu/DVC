//Program: lab744
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab744 {
	public static int large(ArrayList<Integer> a) {
		int size = a.size();
		int large = a.get(0);
		for (int i = 1; i < size; i ++) {
			if (a.get(i) > large) {
				large = a.get(i);
			}
		}
		return large;
	}
	public static void main(String[] args) {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Random rand = new Random();
		final int max = 10;
		ArrayList<Integer> arr = new ArrayList<> (max);
		ArrayList<Integer> arr2 = new ArrayList<> (max);
		for (int i = 0; i < max; i ++) {
			arr.add(rand.nextInt(100));
			arr2.add(rand.nextInt(100));
		}
		System.out.println("The largest number in the first arraylist is "+large(arr));
		System.out.println("The largest number in the second arraylist is "+large(arr2));
		keyboard.close();
	}
}