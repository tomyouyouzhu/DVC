//Program: one
//Author: kunming zhu
//IDE used: code runner
//Program summary: 

import java.util.*;
import java.io.*;

public class one {
	public static void sort(String [] a, double [] b, int c ) {
		int size = c;
		for (int i = 0; i < size; i++) {
			for (int j = i + 1; j < size; j++) {
				if (b[j] < b[i]) {
					double temp = b[i];
					b[i] = b[j];
					b[j] = temp;
					String temp2 = a[i];
					a[i] = a[j];
					a[j] = temp2;
				}
			}
		}
		for (int i = 0; i < size; i++) {
			System.out.printf("%10s %10.2f\n", a[i], b[i]);
		}
	}
	public static void main(String[] args) throws IOException {
		//declarations
		Scanner keyboard = new Scanner(System.in);
		System.out.print("Please enter the file's name: ");
		String fileName = keyboard.nextLine();
		File myFile = new File(fileName);
		while (!myFile.exists())
		{
			System.out.println("**ERROR: no file!");
			System.out.print("Please enter the file's name: ");
			fileName = keyboard.nextLine();
			myFile = new File(fileName);
		}
		Scanner in = new Scanner(myFile);
		String name;
		double score;
		int num = 0;
		while (in.hasNext()) {
			name = in.next();
			score = in.nextDouble();
			num++;
		}
		in.close();
		int index = 0;
		Scanner in2 = new Scanner(myFile);
		String [] nameArr = new String[num];
		double [] scoreArr = new double[num];
		while (in2.hasNext()) {
			name = in2.next();
			score = in2.nextDouble();
			nameArr[index] = name;
			scoreArr[index] = score;
			index++;
		}
		in2.close();
		sort(nameArr, scoreArr, num);
		keyboard.close();
	}
}