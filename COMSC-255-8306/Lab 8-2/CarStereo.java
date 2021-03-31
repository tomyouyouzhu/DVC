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
