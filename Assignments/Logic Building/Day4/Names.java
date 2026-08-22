// Q8Print all name in a string
import java.util.Scanner;
class Names{
  public static void main(String[] args){
     Scanner sc = new Scanner(System.in);
	 String[] names = new String[5];
	 for(int i=0; i<names.length;i++){
	     System.out.println("Enter Names");
		 names[i]= sc.nextLine();
		 }
		 System.out.println("Names are :-");
	 for(String name : names){
	     System.out.println(name);
	 }
  }
}