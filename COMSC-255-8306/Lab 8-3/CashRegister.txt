//Program: Cashregister
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;

public class CashRegister {
	private RetailItem item;
	private int num;
	
	public CashRegister(RetailItem a, int b) {
		item = a;
		num = b;
	}
	
	public double getSubtotal() {
		return item.getPrice() * num;
	} 
	
	public double getTax() {
		return 0.06 * getSubtotal();
	}
	
	public double getTotal() {
		return getTax() + getSubtotal();
	}
}