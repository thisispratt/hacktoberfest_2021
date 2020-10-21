import java.util.*;
import java.lang.*;
class Main {
	static void binaryToDecimal(int n)
	{
		int num = n;
		int decimalValue = 0;
		int base = 1;
		int temp = num;
		while (temp > 0) {
			int lastDigit = temp % 10;
			temp = temp / 10;

			decimalValue += lastDigit * base;

			base = base * 2;
		}

		System.out.print(decimalValue);
	}

	static void decimalToBinary(int n) 
	{  
		int[] binaryNum = new int[32]; 
		int i = 0; 
		while (n > 0) { 
			binaryNum[i] = n % 2; 
			n = n / 2; 
			i++; 
		} 
		for (int j = i - 1; j >= 0; j--) 
			System.out.print(binaryNum[j]); 
	}  
	public static void main(String[] args)
	{
		int num = 100; 
		binaryToDecimal(num);
		System.out.println(" ");
		num=4;
		decimalToBinary(num);
	}
}
