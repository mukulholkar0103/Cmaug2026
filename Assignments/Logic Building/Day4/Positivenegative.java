//Q11 Count Positive Negative nymber in an array 

import java.util.Scanner;
class Positivenegative{
   public static void main(String[] args){
     Scanner sc = new Scanner(System.in);
	 int[] arr = new int[5];
	 int positive=0;
	 int negative=0;
	 for(int i=0; i<arr.length; i++){
	    System.out.println(" Enter the Number");
		arr[i]=sc.nextInt();
	 }
	 for(int i :arr){
	    if(i>=0){
		    positive++ ;
		}
		else{
		   negative++;
		}
	 }
	 System.out.println("Positive number is:- " +positive);
	 System.out.println("Negative number is:- " +negative);
  }
  }
