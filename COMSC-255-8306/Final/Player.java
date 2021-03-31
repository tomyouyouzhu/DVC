//Program: finalplayerclass
//Author: kunming zhu
//IDE used: code runner
//Program summary: 
/*
-------------------------------------------------------
Player Class
-------------------------------------------------------
- name : String
- guess : int
- points : int
- wins : int
- list : ArrayList<Integer> (holds user's guess history)
-------------------------------------------------------
+ Player (name : String)
+ guess : void
+ getGuess : int
+ getName : String
+ getPoints : int
+ addPoints : void
+ subtractPoints : void
+ addWins : void
+ getWins : int
+ getList : ArrayList<Integer> (returns copy of player's
       current guess history)
-------------------------------------------------------
*/
import java.util.*;

public class Player {
	private String name;
	private int guess;
	private int points;
	private int wins;
	private ArrayList<String> list;
	public Player (String a) {
		name = a;
		guess = 0;
		points = 0;
		wins = 0;
		list = new ArrayList<String>();
	}
	public void guess() {
		Random rand = new Random();
		guess = rand.nextInt(2);
		if (guess == 0)
			list.add("B");
		if (guess == 1)
			list.add("R");
	}
	public int getGuess () {
		return guess;
	}
	public String getName() {
		return name;
	}
	public int getPoints() {
		return points;
	}
	public void addPoints() {
		points++;
	}
	public void subtractPoints() {
		points -= 2;
	}
	public void addWins() {
		wins++;
	}
	public int getWins() {
		return wins;
	}
	public ArrayList<String> getList() {
		return list;
	}
}