//Program: lab521
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class lab521
{
	public static void main(String[] args)
	{
		int number,right=0,wrong=0;
		String color,guess;
		for (int i=0; i<10; i++)
		{
			number  = random();
			switch (number)
			{
				case 1:
					color="Green";
					break;
				case 2:
					color="Blue";
					break;
				case 3:
					color="Yellow";
					break;
				case 4:
					color="Orange";
					break;
				case 5:
					color="Purple";
					break;
				default :
					color="Red";
			} 
			guess = userinput();
			int result = judge(color, guess);
			if (result == 1)
				right++;
			if (result == 0)
				wrong++;
		}
		System.out.println("Right : "+right);
		System.out.println("Wrong : "+wrong);
	}
	public static int random()
	{
		Random rand = new Random();
		int randomnumber = rand.nextInt(6);
		return randomnumber;
	}
		
	public static String userinput()
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please make a guess about the color. -> ");
		String enter = keyboard.next();
		return enter;
	}
		
	public static int judge(String a, String b)
	{
		if (a.toUpperCase().equals(b.toUpperCase()))
		{
			System.out.println("Correct!");
			return 1;
		}
		else 
			System.out.println("Wrong! The correct color is "+a);
		return 0;
	}
}