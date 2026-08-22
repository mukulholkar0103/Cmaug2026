// Q2 Multiply by 3 from 1 to N
import java.util.Scanner;
class Multiply{
 public static void main( String[] args){
   Scanner sc= new Scanner(System.in);
   System.out.println(" Enter the number ");
   int num= sc.nextInt();
   for(int i =1; i<=num; i++){
      if(i%3==0){
	    System.out.println(+i);
	  }
   }
 
 }
}
 