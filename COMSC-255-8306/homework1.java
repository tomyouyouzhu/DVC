import java.util.Scanner;
public class homework1
{
	public static void main(String[] args)
	{
		Scanner keyboard = new Scanner(System.in);
		String firstname,midname,lastname,favorite;
		System.out.print("Enter your first name: ");
		firstname=keyboard.nextLine();
		System.out.print("Enter your middle name: ");
		midname=keyboard.nextLine();
		System.out.print("Enter your last name: ");
		lastname=keyboard.nextLine();
		System.out.print("Enter your favorite phrase saying: ");
		favorite=keyboard.nextLine();
		System.out.println("Your initials are: "+firstname.toUpperCase().charAt(0)+midname.toUpperCase().charAt(0)+lastname.toUpperCase().charAt(0));
		System.out.println("Your phrase in all caps: "+favorite.toUpperCase());
		System.out.println("Your phrase in all lowercase: "+favorite.toLowerCase());
	}
}