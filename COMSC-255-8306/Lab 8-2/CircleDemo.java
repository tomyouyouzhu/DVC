//Program: circledemo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class CircleDemo {
	public static void main(String[] args) {
		//declarations
		Random rand = new Random();
		Scanner keyboard = new Scanner(System.in);
		final int max = 10;
		int [] a = new int[max];
		String [] b = new String[max];
		for (int i = 0; i < max; i++) {
			int n = rand.nextInt(5);
			a[i] = n;
			int m = rand.nextInt(2);
			if (m == 0)
				b[i] = "Red";
			if (m == 1)
				b[i] = "Blue";
			if (m == 2)
				b[i] = "Green";
		}
		Circle [] arr = new Circle[max];
		for (int i = 0; i < max; i++) {
			arr[i] = new Circle(a[i],b[i]);
		}
		for (int i = 0; i < max; i++) {
			System.out.println(arr[i].getRadius()+" "+arr[i].getColor());
		}
		for (int i = 0; i < max; i++) {
			for (int j = i + 1; j < max; j++) {
				if (Circle.ifsame(arr[i], arr[j])) {
					System.out.println("No#"+i+" and "+j+" are same. They all have radious: "+arr[i].getRadius()+" and color: "+arr[i].getColor());
				}					
			}
		}
		keyboard.close();
	}
}