/*
-----------------------------------------
ParkingMeter Class
-----------------------------------------
- minutesPurchased : int
-----------------------------------------
+ ParkingMeter(m : int)
+ setMinutesPurchased(m : int) : void
+ getMinutesPurchased() : int
-----------------------------------------
*/

public class ParkingMeter {
	private int mins;
	public ParkingMeter(int a) {
		mins = a;
	}
	public void setMinutesPurchased(int a) {
		mins = a;
	}
	public int getMinutesPurchased() {
		return mins;
	}
}