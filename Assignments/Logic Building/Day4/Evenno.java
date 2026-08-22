//Q4  Print even  number from 1 to N

import java.util.Scanner;
class Evenno{
 public static void main(String[] args){
   Scanner sc = new Scanner(System.in);
   System.out.println("Enter  the number for factorial");
   int num= sc.nextInt();
   for(int i=1;i<=num-1; i++){
     if(i%2==0){
	   System.out.println(+i);
	 }
   }
 
 }
}