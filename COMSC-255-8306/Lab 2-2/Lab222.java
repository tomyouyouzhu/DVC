import java.util.Scanner;
public class Lab222
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		System.out.println("PI: "+Math.PI);
		System.out.printf("PI with 4 decimal places precision: %.4f\n", Math.PI);
		System.out.printf("PI with 8 decimal places precision: %.8f\n", Math.PI);
		System.out.printf("PI in currency format: $%.2f\n", Math.PI);
		System.out.println("Doubles in table format:");
		Double a,b,c,d,e,f;
		a=12.22;
		b=13.33;
		c=14.44;
		d=15.55;
		e=16.66;
		f=17.77;
		System.out.printf("%8.2f%8.2f%8.2f\n",a,b,c);
		System.out.printf("%8.2f%8.2f%8.2f\n",d,e,f);
		System.out.println("Doubles in a wider table format: ");
		System.out.printf("%9.2f%9.2f%9.2f\n",a,b,c);
		System.out.printf("%9.2f%9.2f%9.2f\n",d,e,f);
		System.out.println("Last line of the table combined into a single string:");
		String str=String.format("%9.2f%9.2f%9.2f\n",d,e,f);
		System.out.println(str);
		String label1,label2,label3,x,y,z;
		label1="Name";
		label2="Age";
		label3="City";
		x="Jane";
		y="29";
		z="Oakland";
		System.out.printf("%10s: %s\n",label1,x);
		System.out.printf("%10s: %s\n",label2,y);
		System.out.printf("%10s: %s\n",label3,z);
		System.out.println("Program ending");
	}
}