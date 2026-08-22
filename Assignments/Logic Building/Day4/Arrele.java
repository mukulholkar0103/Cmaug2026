//Q6 Print all element of an array using for each loop
import java.util.Scanner;
class Arrele{
 public static void main(String[] args){
   Scanner sc= new Scanner(System.in);
   int[] arr= new int[5];
   for(int i=0; i<arr.length;i++){
     System.out.println("Enter the value");
	 arr[i]=sc.nextInt();
   }
   for(int i=0; i<arr.length;i++){
     System.out.println(arr[i]);
   }
 
 }
} 