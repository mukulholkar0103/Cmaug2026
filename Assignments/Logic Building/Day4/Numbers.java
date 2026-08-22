// Q1 print number from 1 to N
import java.util. Scanner;
class Numbers{
 public static void main( String[] args){
   Scanner sc = new Scanner( System.in);
   System.out.println("Enter the number");
   int num = sc.nextInt();
   for(int i=1; i<=num; i++){
     System.out.println(+i);
   }
 }
} 