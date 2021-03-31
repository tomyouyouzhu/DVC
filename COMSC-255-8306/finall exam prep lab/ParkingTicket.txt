/*
-----------------------------------------
ParkingTicket Class
-----------------------------------------
- car: ParkedCar
- officer: PoliceOfficer
- fine: double
- minutes: int
+ BASE_FINE: double = 25.0
+ HOURLY_FINE: double = 10.0
-----------------------------------------
+ ParkingTicket(aCar: ParkedCar, 
     anOfficer: PoliceOfficer, min: int)
+ ParkingTicket(ticket2 : ParkingTicket)
+ calculateFine() : void
+ (setters and getters as needed)
+ toString() : String
*/

public class ParkingTicket {
	private ParkedCar car;
	private PoliceOfficer officer;
	private double fine;
	private int minutes;
	public double BASE_FINE = 25.0;
	public double HOURLY_FINE = 10.0;
	
	
	public ParkingTicket(ParkedCar a, PoliceOfficer b, int c) {
		car = a;
		officer = b;
		minutes = c;
		calculateFine();
	}
	
	public ParkingTicket(ParkingTicket a) {
		car = a.car;
		officer = a.officer;
		fine = a.fine;
		minutes = a.minutes;
	}
	
	public void calculateFine() {
		if (minutes % 60 == 0)
			fine = BASE_FINE + HOURLY_FINE * minutes/60;
		else 
			fine = BASE_FINE + HOURLY_FINE + HOURLY_FINE * minutes/60;
		fine = Math.round(fine * 100);
		fine = fine / 100;
	}
	
	public String toString() {
		String str = car.toString() +"\nFine: $"+fine+"\nOverminutes: "+minutes+ officer.toString();
		return str;
	}
}