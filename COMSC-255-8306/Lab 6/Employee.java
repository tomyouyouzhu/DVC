//Program: employee class
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

public class Employee
{
	private String name;
	private int idNumber;
	private String department;
	private String position;
	
	public Employee(String a, int b, String c, String d)
	{
		name = a;
		idNumber = b;
		department = c;
		position = d;
	}
	
	public Employee(String a, int b)
	{
		name = a;
		idNumber = b;
	}
	
	public Employee()
	{
		name = "";
		idNumber = 0;
		department = "";
		position = "";
	}
	
	public String getName()
	{
		return name;
	}
	
	public int getId()
	{
		return idNumber;
	}
	
	public String getDepartment()
	{
		return department;
	}
	
	public String getPosition()
	{
		return position;
	}
	
	public void setName(String a)
	{
		name = a;
	}
	
	public void setId(int a)
	{
		idNumber = a;
	}
	
	public void setDeparment(String a)
	{
		department = a;
	}
	
	public void setPosition(String a)
	{
		position = a;
	}
}