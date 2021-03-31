//Program: finaldemo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class Demo {
	public static void main(String[] args) {
		//declarations
		final int winPoints = 3;
		Player[] player = new Player[3];
		player[0] = new Player("Tom");
		player[1] = new Player("Jerry");
		player[2] = new Player("Kate");
		ArrayList<Card> card = new ArrayList<>();
		int round = 1;
		while (player[1].getPoints() != winPoints && player[2].getPoints() != winPoints && player[0].getPoints() != winPoints && round <= 100) {
			System.out.println("Round #"+round);
			Card a = new Card();
			card.add(a);
			for (int i = 0; i < 3; i ++) {
				player[i].guess();
				String result = "incorrect";
				if (player[i].getGuess() == a.showReveal()) {
					player[i].addPoints();
					result = "correct";
				}
				if (player[i].getGuess() != a.showReveal()) {
					player[i].subtractPoints();
					result = "incorrect";
				}
				if (player[i].getPoints() >= 4)
					player[i].addWins();
				System.out.println("\t>"+player[i].getName()+" guess "+player[i].getGuess()+" and was "+result+". "+player[i].getName()+"'s points: "+player[i].getPoints());
			}
			round++;
		}
		double[] per = new double[3];
		for (int i = 0; i < 3; i++) {
			int win = 0;
			int loss = 0;
			System.out.println("Overall results for: "+player[i].getName());
			System.out.print("\t>");
			for (int j = 0; j < player[i].getList().size(); j++) {
				System.out.print(player[i].getList().get(j));
			}
			System.out.print(" <-- "+player[i].getName()+"'s guesses\n\t>");
			for (int j = 0; j < card.size(); j++) {
				System.out.print(card.get(j).getCard());
			}
			System.out.print(" <-- Card reveals\n\t>");
			for (int j = 0; j < card.size(); j++) {
				if (card.get(j).getCard() == player[i].getList().get(j)) {
					System.out.print("W");
					win++;
				}
				else {
					System.out.print("-");
					loss++;
				}
			}
			System.out.print(" <-- Wins\n\t>");
			per[i] = (double)win / (win + loss);
			System.out.printf("%s 's win percentage: %.2f %%\n",player[i].getName(),per[i]*100);
			if (player[i].getPoints() >= winPoints)
				System.out.println("\t>Winner!!");
		}
		double max = per[0];
		int win = 0;
		for (int i = 1; i < 3; i++) {
			if (per[i] > max) {
				max = per[i];
				win = i;
			}
		}
		System.out.println(">The final winner is "+player[win].getName()+"!!!");
	}
}