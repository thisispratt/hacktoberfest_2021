import java.util.Scanner;
/**
 * 
 * @author Tarannum Ara
 *
 */
public class LeapYear {
  static boolean checkYear(int year)
    {
        if (year % 400 == 0)
            return true;

        if (year % 100 == 0)
            return false;

        if (year % 4 == 0)
            return true;
        return false;
    }
         
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        if(checkYear(year)) System.out.println("Leap Year");
        else System.out.println("Not a Leap Year");
        sc.close();
    }
}
