//Program: Demo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class Demo {
	public static void main(String[] args) {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please enter the first player's name: ");
		String name1 = keyboard.nextLine();
		System.out.print("Please enter the second player's name: ");
		String name2 = keyboard.nextLine();
		System.out.print("How many points do you want to set: ");
		int points = keyboard.nextInt();
		while(points < 6) {
			System.out.print("The number of points is too small. please enter a new one: ");
			points = keyboard.nextInt();
		}
		Player p1 = new Player(name1, points);
		Player p2 = new Player(name2, points);
		System.out.print("How many siders do you want to set: ");
		int side = keyboard.nextInt();
		while (side < 2) {
			System.out.print("The number is too small, please enter a new one: ");
			side = keyboard.nextInt();
		}
		Die d = new Die(side);
		while (p1.getPoints() > 1 && p2.getPoints() > 1) {
			System.out.println("Points: P1: "+p1.getPoints()+" P2: "+p2.getPoints());
			System.out.println("Rolling the die......");
			d.roll();
			int num1 = d.getValue();
			System.out.println("Player1 rolls "+num1);
			d.roll();
			int num2 = d.getValue();
			System.out.println("Player2 rolls "+num2);
			if (p1.getPoints() - num1 < 1) {
				p1.setPoints(p1.getPoints() + num1);
			}
			else {
				p1.setPoints(p1.getPoints() - num1);
			}
			if (p2.getPoints() - num2 < 1) {
				p2.setPoints(p2.getPoints() + num2);
			}
			else {
				p2.setPoints(p2.getPoints() - num2);
			}
		}
		if (p1.getPoints() == p2.getPoints())
			System.out.println("P1: "+p1.getPoints()+" : P2: "+p2.getPoints()+" DEAL!");
		else if (p1.getPoints() == 1 && p2.getPoints() != 1)
			System.out.println("P1: "+p1.getPoints()+" : P2: "+p2.getPoints()+" PLAYER1: "+p1.getName()+" WIN!");
		else if (p1.getPoints() != 1 && p2.getPoints() == 1)
			System.out.println("P1: "+p1.getPoints()+" : P2: "+p2.getPoints()+" PLAYER2: "+p2.getName()+" WIN!");
		keyboard.close();
	}
}