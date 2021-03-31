
/*
-----------------------------------------
PoliceOfficer Class
-----------------------------------------
- name : String
- badge : String
-----------------------------------------
+ PoliceOfficer(n: String, bn: string)
+ PoliceOfficer(officer2 : PoliceOfficer)
+ patrol(car: ParkedCar, meter: ParkingMeter):
	ParkingTicket
+ (setters and getters as needed)
+ toString() : String
*/

public class PoliceOfficer {
	private String name;
	private String badge;
	
	public PoliceOfficer(String a, String b) {
		name = a;
		badge = b;
	}
	public PoliceOfficer (PoliceOfficer a) {
		name = a.name;
		badge = a.badge;
	}
	public ParkingTicket partrol(ParkedCar a, ParkingMeter b) {
		PoliceOfficer bo = new PoliceOfficer(name, badge);
		ParkingTicket apt = new ParkingTicket(a, bo, a.getMins() - b.getMinutesPurchased());
		return apt;		
	}
	public String toString() {
		String str = "\nName: "+name+"\nBadge: "+badge;
		return str;
	}
}