//Program: class
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class personalData
{
	private String name;
	private String address;
	private int age;
	
	public void setName()
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please enter name: ");
		String a = keyboard.nextLine();
		name = a;
	}
	public void setAddress()
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please enter address: ");
		String a = keyboard.nextLine();
		address = a;
	}
	public void setAge()
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please enter age: ");
		int a = keyboard.nextInt();
		age = a;
	}
	public String getName()
	{
		return name;
	}
	public String getAddress()
	{
		return address;
	}
	public int getAge()
	{
		return age;
	}
}