import java.util.*;
import java.lang.*;
public class Main 
{ 
     static int  numberOfDigits(int x) 
    { 
        int n = 0; 
        while (x != 0) 
        { 
            n++; 
            x = x/10; 
        } 
        return n; 
    }  
  static  boolean  isArmstrong (int x) 
    { 
        int order = numberOfDigits(x); 
        int temp=x, sum=0; 
        while (temp!=0) 
        { 
            int r = temp%10; 
            sum = sum + (int)Math.pow((double)r,(double)order); 
            temp = temp/10; 
        }  
        return (sum == x); 
    } 
  
    public static void main(String[] args) 
    { 

        int x = 133; //153 
        if(isArmstrong(x)){
            System.out.println(x + " It is an Armstrong Number");
        }else{System.out.println(x + " It is not an Armstrong Number");} 
    } 
}