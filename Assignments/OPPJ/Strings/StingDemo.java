import java.util.Scanner;
public class StingDemo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		int position= sc.nextInt();
		System.out.println("Original String=" +s);
		
			System.out.println("Character at position " + position +"is " +s.charAt(position));
		
	}

}
