import java.util.Scanner;

public class GCD {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int gcd = 0;
		
		
		if (a>b)
		{
			gcd = b;
		}
		else if (b>a)
		{
			gcd = a;
		}
		
		while(true)
		{
			if(a% gcd ==0 && b% gcd==0)
			{
				System.out.println(gcd);
				break;
			}
			--gcd;
		}
		
		

	}

}
