import java.util.Scanner;

class NumberOfDigitsInInteger {
    public static void main(String[] args) {
        int count = 0, num;
        Scanner a = new Scanner(System.in);
        System.out.println("Enter integer :");
        num = a.nextInt();
        a.close();
        while (num != 0) {
            // num = num/10
            num /= 10;
            ++count;
        }
        System.out.println("Number of digits: " + count);
    }
}