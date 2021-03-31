//Program: Die
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

/*
-----------------------
Die Class
-----------------------
- sides : int
- value : int
-----------------------
+ Die(numSides : int)
+ roll() : void
+ getSides() : int
+ getValue() : int
----------------------
*/
import java.util.*;

public class Die {
	private int sides;
	private int value;
	
	public Die(int a) {
		sides = a;
		value = 0;
	}	
	
	public void roll() {
		value = 0;
		Random rand = new Random();
		value = rand.nextInt(sides) + 1;
	}
	
	public int getSides() {
		return sides;
	}
	
	public int getValue() {
		return value;
	}
}