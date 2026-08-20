//Q2 Age Checker

import java.util.Scanner;
class AgeChecker{
  static void checker(){
      Scanner sc=new Scanner(System.in);
	  System.out.println("Age");
	  int Age=sc.nextInt();
	 if(Age<18){
	     System.out.println("Teenager");
	   }
	   else if(Age>=18&& Age<=60){
	     System.out.println("Adult");
		 
	   }
	   else{
	     System.out.println("Old");
	   }
  }
   public static void main( String[] args){
       AgeChecker.checker();
   }
 
}