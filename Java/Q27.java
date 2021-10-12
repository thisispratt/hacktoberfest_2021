import java.util.Scanner;

public class Q27 {

    static int reverse(int num) {

        int sum = 0;

        while (num > 0) {
            int temp = num % 10;

            sum = sum * 10 + temp;
            num /= 10;
        }

        return sum;

    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the number you want to check for palindrome: ");
        int num = scanner.nextInt();

        int reversed = reverse(num);

        if(reversed == num)
            System.out.println(num+" is a palindrome");
        else
            System.out.println(num+" is not a palindrome");

        scanner.close();
        
    }

}
