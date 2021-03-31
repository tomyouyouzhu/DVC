//Program: demo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class personalDataDemo
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		personalData a = new personalData();
		personalData b = new personalData();
		personalData c = new personalData();
		a.setName();
		a.setAddress();
		a.setAge();
		b.setName();
		b.setAddress();
		b.setAge();
		c.setName();
		c.setAddress();
		c.setAge();
		System.out.println();
		System.out.println("Name: "+a.getName());
		System.out.println("Address: "+a.getAddress());
		System.out.println("Age: "+a.getAge());
		System.out.println("Name: "+b.getName());
		System.out.println("Address: "+b.getAddress());
		System.out.println("Age: "+b.getAge());
		System.out.println("Name: "+c.getName());
		System.out.println("Address: "+c.getAddress());
		System.out.println("Age: "+c.getAge());
		keyboard.close();
	}
}