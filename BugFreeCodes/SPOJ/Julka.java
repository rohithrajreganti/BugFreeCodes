import java.util.Scanner;
import java.io.*;
import java.
/*
Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 25/01/2017
Problem CODE - JULKA
SPOJ
Change file name to Main while executing
 */


import java.util.Scanner;
import java.io.*;
import java.math.BigInteger;
public class Main {

	public static void main(String[] args) {
		BigInteger n,k,x,N;
		Scanner in = new Scanner(System.in);
		for(int i=0;i<10;i++){
		
			N = in.nextBigInteger();
		    x = in.nextBigInteger();
		    n = N.subtract(x);
		    n = n.divide(BigInteger.valueOf(2));
		    k = N.subtract(n);
		   // n  = fact.multiply(BigInteger.valueOf(i));

		    System.out.println(k);
		    System.out.println(n);
		}
		
		

	}

	

}