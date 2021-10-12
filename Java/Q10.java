import java.util.Scanner;

public class Q10 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter a number!");
        int num = scanner.nextInt();

        if(num % 2 == 0)
            System.out.println("Number is even");
        else
            System.out.println("Number is odd");
    }

}