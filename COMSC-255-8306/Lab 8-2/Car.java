/*
-----------------------
Car2 Class Definition
-----------------------
- make: String
- year : int
- speed : int
- engine: CarEngine
- stereo: CarStereo
-----------------------
+ Car2(m: String, y: int, e: CarEngine, s: CarStereo)
+ accelerate() : void
+ brake() : void
+ to_kph(mph: double) : double
+ to_mph(kph: double) : double
+ to_string() : string
----------------------
*/

/*
-----------------------
CarEngine Class
-----------------------
- type: String
- cyl : int
- hp : int
-----------------------
+ CarEngine(t: String, c: int, h: int)
+ CarEngine(object2: CarEngine)
+ to_string() : string
----------------------
*/

/*
-----------------------
CarStereo Class
-----------------------
- brand: String
- watts: int
-----------------------
+ CarStereo(b: String, w: int)
+ CarStereo(object2: CarStereo)
+ to_string() : string
----------------------
*//*
public class CarStereo {
	private String brand;
	private int watts;
	public CarStereo(String a, int b) {
		brand = a;
		watts = b;
	}
	public CarStereo(CarStereo a) {
		brand = a.getBrand();
		watts = a.getWatts();
	}
	public String getBrand() {
		return brand;
	}
	public int getWatts() {
		return watts;
	}
	public String to_string() {
		String str = "\tBrand: " + brand + "\n\tWatts: " + watts;
		return str;
	}
}
public class CarEngine {
	private String type;
	private int cyl;
	private int hp;
	public CarEngine(String a, int b, int c) {
		type = a;
		cyl = b;
		hp = c;
	}
	public String getType() {
		return type;
	}
	public int getCyl() {
		return cyl;
	}
	public int getHp() {
		return hp;
	}
	public CarEngine(CarEngine a) {
		type = a.getType();
		cyl = a.getCyl();
		hp = a.getHp();
	}
	public String to_string() {
		String str = "\tType: " + type + "\n\tCyl: " + cyl + "\n\tHp: " + hp;
		return str;
	}
}*/
public class Car {
	private String make;
	private int year;
	private int speed;
	private CarEngine engine;
	private CarStereo stereo;
	public Car() {}
	public Car(String a, int b, CarEngine c, CarStereo d) {
		make = a;
		year = b;
		speed = 0;
		engine = c;
		stereo = d;
	}
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
	public double to_kph(double a) {
		return a*1.60934;
	}
	public double to_mph(double a) {
		return a/1.60934;
	}	
	public String to_string() {
		String str = "\tMake: " + make + "\n\tYear: " + year + "\n\tSpeed: " + speed +"\n\tEngine:\n " + engine.to_string()  +"\n\tStereo:\n " + stereo.to_string();
		return str;
	}
}