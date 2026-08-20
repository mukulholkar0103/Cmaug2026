//Q6 Sum of Numbers using while loop
  import java.util.Scanner;
  class SumofNum{
    static void sum(){
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter the Number");
	int num=sc.nextInt();
	int sum=0;
	for(int i =1;i<=num;i++){
	 sum = sum + i;
	}
	 System.out.println("Sum of Number is " + sum);
	 
	}
	public static void main(String[] args){
	 SumofNum.sum();	
	 }
	 
  }