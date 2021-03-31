//Program: finalcardclass
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

/*

-------------------------------------------------------
Player Card
-------------------------------------------------------
- name : String
- result : int
-------------------------------------------------------
+ Card (name : String)
+ getCard : int
+ showReveal : int
-------------------------------------------------------
*/
import java.util.*;

public class Card {
	private String name;
	private int result;
	public Card () {
		Random rand = new Random();
		result = rand.nextInt(2);
		if (result == 0)
			name = "B";
		if (result == 1)
			name = "R";
	}
	public String getCard() {
		return name;
	}
	public int showReveal() {
		return result;
	}
}
