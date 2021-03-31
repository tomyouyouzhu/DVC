//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class program4
{
	public static final String WELCOME1="This program will calculate your phone bill based on two pieces of data";
	public static final String WELCOME2="that you enter: your phone plan and your data usage.";
	public static final String PLAN="Plans:";
	public static final String PLANA="A: $39.99/month, 4 GB data limit, $10/GB additional data.";
	public static final String PLANB="B: $59.99/month, 8 GB data limit, $5/GB additional data.";
	public static final String PLANC="C: $69.99/month, unlimited data.";
	public static final String ENTER="Please enter:";
	public static final String OUT1="# gigs used for the month: ";
	public static final String OUT2="Phone plan (A, B, or C): ";
	public static final String WRONG="Inputing incorrectly, pleas restart the program.";
	public static final String OUT3="Your itemized monthly bill:";
	public static final String OUT4="Data used: ";
	public static final String OUT5="Data limit: ";
	public static final String OUT6="Data limit: ";
	public static final String OUT7="7.50%";
	public static final String OUT8="Data overage: ";
	public static final String OUT9="Base plan: $ ";
	public static final String OUT10="Extra data charges: $ ";
	public static final String OUT11="Subtotal: $ ";
	public static final String OUT12="Taxes: $ ";
	public static final String OUT13="Total bill: $ ";
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		double a;//data used
		char b;//user plan
		double plan, addprice,overdata;//plan cost, overdata price, overdata
		String limit;//data limie
		System.out.println(WELCOME1);
		System.out.println(WELCOME2);
		System.out.println("");
		System.out.println(PLAN);
		System.out.printf("%-10s %s \n"," ",PLANA);
		System.out.printf("%-10s %s \n"," ",PLANB);
		System.out.printf("%-10s %s \n"," ",PLANC);
		System.out.println("");
		System.out.println(ENTER);
		System.out.println("");
		System.out.print(OUT1);
		a=keyboard.nextDouble();//input a
		System.out.print(OUT2);
		b=keyboard.next().charAt(0);//choose b
		System.out.println("");
		if(a<0 || (Character.toUpperCase(b)!='A' && Character.toUpperCase(b)!='B' && Character.toUpperCase(b)!='C'))
		{
			System.out.println(WRONG);
		}//input check
		else 
		{
			switch (Character.toUpperCase(b))
			{
				case 'A' : plan=39.99;limit="4.00";addprice=10;overdata=a-4;
					break;
				case 'B' : plan=59.99;limit="8.00";addprice=5;overdata=a-8;
					break;
				case 'C' : plan=69.99;limit="unlimited";addprice=0;overdata=0;
					break;
				default : plan=0;limit="unlimited";addprice=0;overdata=0;
			}//plan choose
			if (overdata<0)
				overdata=0;//in case no overdata
			System.out.println(OUT3);
			System.out.println("");
			System.out.printf("%25s%25.2f\n",OUT4,a);
			System.out.printf("%25s%25s\n",OUT5,limit);
			System.out.printf("%25s%25s\n",OUT6,OUT7);
			if(Character.toUpperCase(b)!='C' && overdata>0)
				System.out.printf("%25s%25.2f\n",OUT8,overdata);
			System.out.println("");
			System.out.printf("%25s%25s\n",OUT9,plan);
			if(Character.toUpperCase(b)!='C' && overdata>0)
				System.out.printf("%25s%25.2f\n",OUT10,overdata*addprice);
			System.out.printf("%25s%25.2f\n",OUT11,plan+overdata*addprice);
			System.out.printf("%25s%25.2f\n",OUT12,0.075*(plan+overdata*addprice));
			System.out.printf("%25s%25.2f\n",OUT13,1.075*(plan+overdata*addprice));//out print done
		}
		keyboard.close();
	}
}