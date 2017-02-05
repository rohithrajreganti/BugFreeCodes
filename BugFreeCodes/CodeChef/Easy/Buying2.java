/*
Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 25/01/2017
Problem CODE - BUYING2
CODE CHEF
Change file name to Main while executing
 */

import java.util.ArrayList;
import java.util.Scanner;
import java.io.*;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int test = scanner.nextInt();
		for (int i = 0; i < test; i++) {
			int n = scanner.nextInt();
			int x = scanner.nextInt();
			ArrayList<Integer> a = new ArrayList<Integer>(200);

			for (int j = 0; j < n; j++) {
				a.add(scanner.nextInt());

			}
			int sum1 = sum(a);
			int val = sum1 / x;

			a.sort(null);

			a.remove(a.get(0));

			int new_val = sum(a) / x;
			if (val == new_val) {
				System.out.println(-1);
			} else {
				System.out.println(val);
			}

		}

	}

	private static int minimum(ArrayList a) {

		a.sort(null);
		return (int) a.get(0);

	}

	private static int sum(ArrayList<Integer> a) {

		int sum = 0;
		for (int i = 0; i < a.size(); i++) {
			sum += (int) a.get(i);

		}

		return sum;

	}

}
