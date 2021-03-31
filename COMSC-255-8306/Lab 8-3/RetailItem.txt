//Program: Retailitem
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

public class RetailItem {

	private String description;   // Item description
	private int unitsOnHand;      // Number of units on hand
	private double price;         // Unit price

	public RetailItem(){
		description = "";
		unitsOnHand = 0;
		price = 0.0;
	}

	public RetailItem(String d, int u, double p) {
		description = d;
		unitsOnHand = u;
		price = p;
	}

	public void setDescription(String d) {
		description = d;
	}

	public void setUnitsOnHand(int u) {
		unitsOnHand = u;
	}

	public void setPrice(double p) {
		price = p;
	}

	public String getDescription() {
		return description;
	}

	public int getUnitsOnHand() {
		return unitsOnHand;
	}

	public double getPrice() {
		return price;
	}
}