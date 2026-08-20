// Q1 Sum of Number using method
import java.util.Scanner;
class SumofNumber{
  static void Sum(){
      Scanner sc=new Scanner(System.in);
	  System.out.println("Enter First Number");
	  int num1=sc.nextInt();
	  System.out.println("Enter First Number");
	  int num2=sc.nextInt();
      int answer = num1 + num2;
      System.out.println("num1"+num1+"num2"+num2+"Sum" +answer);
  }
   public static void main( String[] args){
       Sum();
   }
 
}