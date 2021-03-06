import java.util.*;

public class RoomFlooring {
	private RoomDimension size;
	private double flooringCost;
	public RoomFlooring(RoomDimension a, double b) {
		size = a;
		flooringCost = b;
	}
	public double getCost() {
		return flooringCost*size.getArea();
	}
	public String to_string() {
		String str = "\tSize:\n " + size.to_string() + "\n\tUnitCost: " + flooringCost + "\n\tTotalCost: " + getCost();
		return str;
	}
}