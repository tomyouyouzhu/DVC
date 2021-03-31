/*
-----------------------
		  Car
-----------------------
- make: String
- year : int
- speed : int
-----------------------
+ Car()
+ Car(m: String, y: int)
+ setMake(m: String) : void
+ getMake() : String
+ setYear(y: int) : void
+ getYear() : int
+ setSpeed(s: int) : void
+ getSpeed() : int
+ accelerate() : void
+ brake() : void
----------------------
*/
public class Car {
	//instance fields
	private String make;
	private int year;
	private int speed;
	
	//constructor method(s)
	Car(String m, int y) {
		year = y;
		make = m;
		speed = 0;
	}
	
	//methods for make
	public void setMake (String m) {
		make = m;
	}
	
	public String getMake() {
		return make;
	}

	//methods for year
	public void setYear (int y) {
		year = y;
	}
	
	public int getYear() {
		return year;
	}

	//methods for speed
	public void setSpeed (int s) {
		speed = s;
	}
	
	public int getSpeed() {
		return speed;
	}
	
	public void accelerate() {
		speed += 5;
	}
	
	public void brake() {
		speed -= 5;
	}
}