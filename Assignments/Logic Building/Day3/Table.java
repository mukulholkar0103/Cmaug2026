// Q5 Table

import java.util.Scanner;
 class Table{
  static void multiply(){
  
   Scanner sc = new Scanner(System.in);
   System.out.println("Enter number");
   int num= sc.nextInt();
   for(int i=1;i<=10;i++){
    System.out.println(num*i);
   }
  }
  public static void main(String[] args){
   Table.multiply();
  }
 
 }