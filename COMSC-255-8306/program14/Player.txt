//Program: Player
//Author: kunming zhu
//IDE used: code runner
//Program summary: 


/*
-----------------------
Player Class
-----------------------
- name: String
- points: int
-----------------------
+ Player(n : String, p: int)
+ getName() : String
+ getPoints() : int
+ setName(n: String) : void
+ setPoints(p: int) : void
----------------------
*/

public class Player {
	private String name;
	private int points;
	
	public Player(String a, int b) {
		name = a;
		points = b;
	}
	
	public String getName() {
		return name;
	}
	
	public int getPoints() {
		return points;
	}
	
	public void setName(String a) {
		name = a;
	}
	
	public void setPoints(int a) {
		points = a;
	}
}