//Q10 Average of element in an array


 import java.util.Scanner;
 class Average{
   public static void main(String[] args){
   Scanner sc= new Scanner(System.in);
   int[] arr= new int[5];
   int sum=0;
   double avg=0;
   for(int i=0; i<arr.length;i++){
     System.out.println("Enter the value");
	 arr[i]=sc.nextInt();
   }
   for(int i=0; i<arr.length;i++){
     sum=sum+arr[i];
     
   }
    avg=sum/arr.length;
   System.out.println("Average of value" +avg );
 
 }
 
 }