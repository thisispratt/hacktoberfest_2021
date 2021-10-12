import java.util.Scanner;

public class Q13 {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int a, b, c;

        System.out.print("Enter co-efficient of x^2:  ");
        a = scanner.nextInt();
        System.out.print("Enter co-efficient of x:  ");
        b = scanner.nextInt();
        System.out.print("Enter constant:  ");
        c = scanner.nextInt();

        double root1 = (-b + Math.sqrt(b * b - 4 * a * c)) / 2 * a;
        double root2 = (-b - Math.sqrt(b * b - 4 * a * c)) / 2 * a;

        if (root1 == root2)
            System.out.println("The root of the quadratic equation is: " + root1);
        else
            System.out.println("The two roots of the quadratic equation are: " + root1 + " and " + root2);

        scanner.close();
    }

}
