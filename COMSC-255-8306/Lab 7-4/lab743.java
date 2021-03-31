//Program: lb743
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;
import java.io.*;

public class lab743 {
	public static void main(String[] args) throws IOException {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		File file = new File("movies.txt");
		Scanner infile = new Scanner(file);
		int count = 0;
		while (infile.hasNext()) {
			String input = infile.nextLine();
			count++;
		}
		infile.close();
		Scanner infile2= new Scanner(file);
		ArrayList<String> arr = new ArrayList<>(count);
		while (infile2.hasNext()) {
			arr.add(infile2.nextLine());
		}
		infile.close();
		for (int i = 0; i < count; i ++ ) {
			System.out.println("# "+(i+1)+" movie's name is-> "+arr.get(i));
		}
		keyboard.close();
	}
}