//Q14 Find the index of an element of an array
import java.util.Scanner;
class Findindex{
 public static void main(String[] args){
   Scanner sc= new Scanner(System.in);
   int[] arr= new int[5];
   for(int i=0; i<arr.length;i++){
     System.out.println("Enter the value");
	 arr[i]=sc.nextInt();
   }
   System.out.println("Enter the value to find");
   int num=sc.nextInt();
   
   for(int i=0; i<arr.length;i++){
      if(arr[i]==num){
	     System.out.println("Element found on index" +i);
	  }
	  else{
	     System.out.println(" Not Found");
	  }
   }
 
 }
} 