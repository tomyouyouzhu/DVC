/*
-----------------------------------------
Parked Car Class
-----------------------------------------
- make : String
- model : String
- color : String
- plate: String
- minutesParked : int
-----------------------------------------
+ ParkedCar(mk: String, mod: String,
     col: String, lic: String, min: int)
+ ParkedCar(car2 : ParkedCar)
+ (setters and getters as needed)
+ toString() : String
-----------------------------------------
*/


public class ParkedCar {
	private String make;
	private String model;
	private String color;
	private String plate;
	private int mins;
	
	public ParkedCar(String a, String b, String c, String d, int e) {
		make = a;
		model = b;
		color = c;
		plate = d;
		mins = e;
	}
	
	public ParkedCar(ParkedCar a) {
		make = a.make;
		model = a.model;
		color = a.color;
		plate = a.plate;
		mins = a.mins;
	}
	
	public String getMake() {
		return make;
	}
	public String getModel() {
		return model;
	}
	public String getColor() {
		return color;
	}
	public String getPlate() {
		return plate;
	}
	public int getMins() {
		return mins;
	}
	
	public String toString() {
		String str = "\nMake: "+make+"\nModel: "+model+"\nColor: "+color+"\nPlate: "+plate+"\nParkedMins: "+mins; 
		return str;
	}
}


