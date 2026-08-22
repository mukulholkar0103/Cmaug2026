//Q9 Largest element in an array

import java.util.Scanner;
class Largest{
   public static void main(String[] args){
     Scanner sc = new Scanner(System.in);
	 int[] arr = new int[5];
	 int max=0;
	 for(int i=0; i<arr.length; i++){
	    System.out.println(" Enter the Number");
		arr[i]=sc.nextInt();
	 }
	 for(int i :arr){
	    if(i >=max){
		  max=i ;
		}
	 }
	 System.out.println("Largest no is:- " +max);
  }
}