public class RoomDimension {
	private double length;
	private double width;
	public RoomDimension(double a, double b) {
		length = a;
		width = b;
	}
	public double getArea() {
		return length*width;
	}
	public String to_string() {
		String str = "\tLength: " + length + "\n\tWidth: " + width + "\n\tArea: " + getArea();
		return str; 
	}
}