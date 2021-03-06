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
}