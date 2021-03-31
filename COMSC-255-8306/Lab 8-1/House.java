//Program: Program number and name (e.g. Program 2 - Mutual Funds Calculator)
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class House {
	String color;
	String type;
	int year_built;
	int bedrooms;
	double bathrooms;
	
	public House(String c, String t, int y, int bd, double bath) {
		color = c;
		type = t;
		year_built = y;
		bedrooms = bd;
		bathrooms = bath;
	}
	
	public String getColor() {
		return color;
	}
	
	public String getType() {
		return type;
	}
	
	public int getYearBuilt() {
		return year_built;
	}
	
	public int getBedrooms() {
		return bedrooms;
	}
	
	public double getBathrooms() {
		return bathrooms;
	}
	
	public String to_string() {
		String str = "\tColor: " + color + "\n\tType: " + type + "\n\tYear Built: " + year_built +"\n\tBedrooms: " + bedrooms  +"\n\tBathrooms: " + bathrooms;
		return str;
	}
}
