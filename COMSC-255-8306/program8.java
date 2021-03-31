//Program: Program 8
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;
import java.io.*;

public class program8
{
	public static void main(String[] args) throws IOException
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.println("***GUEST LIST GENERATOR***");
		System.out.print("Enter a filename for the guest list: ");
		String s=keyboard.next();//file name
		int choice;//int for choice
		File myFile=new File(s); //file name
		while (myFile.exists())//checking 
		{
			System.out.println("**ERROR: the file is exist, please enter a new name!");
			System.out.print("Enter a filename for the guest list: ");
			s=keyboard.nextLine();
			myFile=new File(s);
		}
		System.out.print("How many guests do you want to add to the guest list? ");
		int n = keyboard.nextInt();
		while (n<=0)//checking
		{
			System.out.print("How many guests do you want to add to the guest list? ");
			n = keyboard.nextInt();
		}
		System.out.println();
		PrintWriter out = new PrintWriter(myFile);//writ in file
		for (int i=1; i<n+1; i++)
		{
			System.out.print("Enter guest #"+i+": ");
			String m=keyboard.next();
			out.println(m);
		}
		out.close();//close file
		do 
		{
			do 
			{
				System.out.println("Enter:");
				System.out.printf("     %s\n","1: Add names to the guest list");
				System.out.printf("     %s\n","2: Create new guest list (overwrite old list)");
				System.out.printf("     %s\n","3: Create new guest list (new list)");
				System.out.printf("     %s\n","4: Quit");
				choice = keyboard.nextInt();//choice
			}while(choice!=1 && choice!=2 && choice!=3 && choice!=4);
			System.out.println("     Your choice:"+choice);
			if (choice==1)//for adding
			{
				System.out.println("Adding to the current list list...");
				System.out.print("How many guests do you want to add to the guest list? ");
				n = keyboard.nextInt();
				FileWriter fwriter = new FileWriter(myFile,true);
				PrintWriter out1 = new PrintWriter(fwriter);
				for(int i=1; i<n+1; i++)
				{
					System.out.print("Enter guest #"+i+": ");
					String m=keyboard.next();
					out1.println(m);
				}
				out1.close();
			}
			else if (choice==2)//for rewriting
			{
				System.out.println("Rewritting to the current list list...");
				System.out.print("How many guests do you want to add to the guest list? ");
				n = keyboard.nextInt();
				PrintWriter out1 = new PrintWriter(myFile);
				for (int i=1; i<n+1; i++)
				{
					System.out.print("Enter guest #"+i+": ");
					String m=keyboard.next();
					out1.println(m);
				}
				out1.close();
			}
			else if (choice==3)//for new file name
			{
				System.out.println("Creating new guest list...");
				System.out.print("Enter a filename for the guest list: ");
				s=keyboard.next();
				myFile=new File(s);
				while (myFile.exists())
				{
					System.out.println("**ERROR: the file is exist, please enter a new name!");
					System.out.print("Enter a filename for the guest list: ");
					s=keyboard.nextLine();
					myFile=new File(s);
				}
				System.out.print("How many guests do you want to add to the guest list? ");
				n = keyboard.nextInt();
				while (n<=0)
				{
					System.out.print("How many guests do you want to add to the guest list? ");
					n = keyboard.nextInt();
				}
				System.out.println();
				PrintWriter out1 = new PrintWriter(myFile);
				for (int i=1; i<n+1; i++)
				{
					System.out.print("Enter guest #"+i+": ");
					String m=keyboard.next();
					out1.println(m);
				}
				out1.close();
			}
			else //ending
			{
				System.out.println("Program ending.");
			}
		}while (choice!=4);
		keyboard.close();
	}
}