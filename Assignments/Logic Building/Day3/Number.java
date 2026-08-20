// Q4 User Input for positive number using  do while loop
  
  import java.util.Scanner;
  class Number{
	  static void positive(){
	  Scanner sc = new Scanner(System.in);
	 int num1;
	 do{
	 System.out.println("Enter the Number");
	  num1= sc.nextInt();
	 }
	 while(num1<0 );
	 System.out.println("Enter number is" +num1 );
   
		  
	  } 
	  
   public static void main(String[] args){
      Number.positive();
   }
  
  }  
    