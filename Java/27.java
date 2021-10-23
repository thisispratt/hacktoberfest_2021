import java.util.*;

class CheckPalindrome {
    public static int isPalindrome(int num) {
        int out = 0;
        while (num != 0) {
            int last = num % 10;
            out = out * 10 + last;
            num = num / 10;
        }
        return out;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        int res = isPalindrome(n);
        if (res == n) {
            System.out.println("Yes! it's a Palindrome");
        } else {
            System.out.println("No! it's not a Palindrome");
        }
    }
}