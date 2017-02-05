/*
Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 05/02/2017
Problem CODE - LASTDIG
SPOJ
Change file name to Main while executing
 */


import java.io.*;
import java.util.Scanner;
import java.lang.Math;
class LastDig{
	public static 
	void main(String Args[]){Scanner scanner = new Scanner(System.in);int test= scanner.nextInt();
		for(int i=0;i<test;i++){
				int a = scanner.nextInt();
				int b=scanner.nextInt();

				if(b==0){
						System.out.println(1);
						}
				else{
b=b%4;
switch(a){
case 0 : 
case 10 : 
case 20 :System.out.println(0);break;
case 1 : 
case 11 :System.out.println(1);break;
case 5 : 
case 15 : System.out.println(5);break;
case 6 : 
case 16 :System.out.println(6);break;
default:if(b==0){b=4;}
		int m= (int)(Math.pow(a,b));
		String s= Integer.toString(m);
		System.out.println(s.charAt(s.length()-1));}}}}}

