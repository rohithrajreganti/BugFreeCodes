import java.util.Scanner;

class Ciel
{
	public static void main(String args[])
	{
		Scanner scanner = new Scanner(System.in);
		int a=scanner.nextInt();
		int b=scanner.nextInt();
		String ans=Integer.toString(a-b);
		if(ans.length()==1 && ans.equals(1)) {System.out.println(2);}
		else if (ans.length()==1 && !ans.equals(1)) {System.out.println(1);}
		else if (ans.charAt(0)=='1'){ System.out.println("2"+ans.substring(1));}
		else  {System.out.println("1"+ans.substring(1));}


	}
}