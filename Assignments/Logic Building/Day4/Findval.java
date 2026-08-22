//Q13 Find the index of an element of an array
import java.util.Scanner;
class Findval{
 public static void main(String[] args){
   Scanner sc= new Scanner(System.in);
   int[] arr= new int[5];
   int find =-1;
   for(int i=0; i<arr.length;i++){
     System.out.println("Enter the value");
	 arr[i]=sc.nextInt();
   }
   System.out.println("Enter the value to find");
   int num=sc.nextInt();
   
   for(int i=0; i<arr.length;i++){
      if(arr[i]==num){
             find=arr[i];
			 break;
	  }
	  
   }
   if(find!=-1){
	   System.out.println(" Found " + find);
   }
   else{
	   System.out.println("Not Found");
   }
   
 
 }
}