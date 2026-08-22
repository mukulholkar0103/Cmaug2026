//Q12 Sort of an array
import java.util.Scanner;
import java.util.Arrays;
class Sorted{
   public static void main(String[] args){
     Scanner sc = new Scanner(System.in);
	 int[] arr = new int[5];
	
	 for(int i=0; i<arr.length; i++){
	    System.out.println(" Enter the Number");
		arr[i]=sc.nextInt();
	 }
	 Arrays.sort(arr);
	 for(int i :arr){
	    System.out.println("Sorted Array is:- " +i);
	 }
	 
  }
  }
