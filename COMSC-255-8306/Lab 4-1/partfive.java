//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 


public class partfive
{
	public static void main(String[] args)
	{
		for (int i=1,j=0; i<=100; i++)
		{
			if (i%4==0)
			{
				continue;
			}
			String a=Integer.toString(i);
			if (i<10)
			{
				j=j+1;
				System.out.print("0"+a+" ");
			}
			else 
			{
				j=j+1;
				System.out.print(a+" ");
				if (j>14 && j%15==0)
				{
					System.out.print("\n");
				}
			}
		}
	}
}