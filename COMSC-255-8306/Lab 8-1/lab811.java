//Program: lab811
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab811 {
	public static void main(String[] args) {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		House house = new House("Beige", "Ranch", 1979, 3, 2.5);
		System.out.println(house.to_string());
		keyboard.close();
	}
}