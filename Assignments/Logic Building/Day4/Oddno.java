//	Q5 Sum of odd number  1 and N

import java.util.Scanner;
class Oddno{
 public static void main(String[] args){
   Scanner sc = new Scanner(System.in);
   System.out.println("Enter  the number for factorial");
   int num= sc.nextInt();
   int sum=0;
   for(int i=1;i<=num; i++){
     if(i%2==1){
	   sum=sum+i;
	 }
	   
	 }
   System.out.println(+sum);
 }
}