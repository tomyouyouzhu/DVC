//Program: lab742
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;
import java.util.*;

public class lab742 {
	public static void main(String[] args) {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Random rand = new Random();
		final int max = 25;
		int count = 0;
		int sum = 0;
		ArrayList<Integer> arr = new ArrayList<>(max);
		for (int i = 0; i < max; i ++) {
			arr.add(rand.nextInt(101));
		}
		for (int i = 0; i < max; i = i + 2) {
			System.out.println("# "+(i+1)+" odd number is: "+arr.get(i));
			sum = sum + arr.get(i);
			count++;
		}
		System.out.println("The sum of these odd numbers is "+ sum);
		System.out.println("There are "+count+" odd numbers.");
		keyboard.close();
	}
}