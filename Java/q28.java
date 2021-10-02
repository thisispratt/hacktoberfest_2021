
import java.util.*;

public class q28 {
public static void main(String[]args) {
	Scanner sc=new Scanner(System.in);
	int no=sc.nextInt(); 
	//enter your number 
	int flag=0; //a flag is needed to label it as a prime or not
	for(int i=2;i<=no/2;i++) {
		if(no%i==0) {
			flag=1;
			break;
		}
	}
	if(no<=1){flag=1;}else if(no==2 || no==3){flag=0;}
	if(flag==1) {
		System.out.print("Not a Prime");
	}
	else {
		System.out.print("It's a Prime");
		}
}
}
