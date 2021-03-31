//Program: EmployeeDemo
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.Scanner;

public class EmployeeDemo
{
	public static void main(String[] args)
	{
		//declarations
		Scanner keyboard = new Scanner(System.in);
		Employee a = new Employee("Susan Meyers", 47899, "Accounting", "Vice President");
		Employee b = new Employee("Mark Jones", 39119, "IT", "Programmer");
		Employee c = new Employee("Joy Rogers",81774,"Manufacturing","Engineer");
		System.out.printf("%s,%s,%s,%s\n",a.getName(),a.getId(),a.getDepartment(),a.getPosition());
		System.out.printf("%s,%s,%s,%s\n",b.getName(),b.getId(),b.getDepartment(),b.getPosition());
		System.out.printf("%s,%s,%s,%s\n",c.getName(),c.getId(),c.getDepartment(),c.getPosition());
		keyboard.close();
	}
}