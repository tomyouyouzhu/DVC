//Program: lab741
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab741 {
	public static void main(String[] args) {
		//declarations
		final int max = 10;
		Scanner keyboard = new Scanner(System.in);
		ArrayList<Double> arr = new ArrayList<>(max);
		double sum = 0;
		for (int i = 0; i < max; i++) {
			System.out.print("Please enter #"+(i+1)+" ->");
			double num = keyboard.nextDouble();
			arr.add(num);
			sum = sum + num;
		}
		System.out.println("Entering done.");
		for (int i = 0; i < max; i++) {
			System.out.println("#"+(i+1)+" is "+ arr.get(i));
		}
		System.out.println("The sum of them is "+sum);
		keyboard.close();
	}
}