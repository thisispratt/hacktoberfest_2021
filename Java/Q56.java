import java.util.*;
public class p56 {

 int lengthOfString(String s)
{
	return s.length();
}
public static void main(String args[])
{
	Scanner sc = new Scanner(System.in);
	p56 ob = new p56();
	System.out.println("Enter any string to calculate its length");
	String str=sc.nextLine();
	int len=ob.lengthOfString(str);
	System.out.println(len);
}
}
