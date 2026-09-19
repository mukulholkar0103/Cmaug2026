import java.util.Scanner;

public class StringDemo1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		System.out.println("String1 ");
		String string1 = sc.nextLine();
		System.out.println("String2 ");
		String string2 = sc.nextLine();
		int result= string1.compareTo(string2);
		  if (result == 0) {
	            System.out.println("\"" + string1 + "\" is equal to \"" + string2 + "\"");
	        }
	        else if (result < 0) {
	            System.out.println("\"" + string1 + "\" is less than \"" + string2 + "\"");
	        }
	        else {
	            System.out.println("\"" + string1 + "\" is greater than \"" + string2 + "\"");
	        }

		
	}

}
