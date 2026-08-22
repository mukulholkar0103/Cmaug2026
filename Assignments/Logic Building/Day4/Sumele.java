//Q7 Print sum of all element

import java.util.Scanner;
class Sumele{
 public static void main(String[] args){
   Scanner sc= new Scanner(System.in);
   int[] arr= new int[5];
   int sum=0;
   for(int i=0; i<arr.length;i++){
     System.out.println("Enter the value");
	 arr[i]=sc.nextInt();
   }
   for(int i=0; i<arr.length;i++){
     sum=sum+arr[i];
     
   }
   System.out.println("Sum of value" +sum );
 
 }
} 