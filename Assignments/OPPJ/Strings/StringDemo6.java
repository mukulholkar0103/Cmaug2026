
public class StringDemo6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String s="The quick brown fox jumps ";
		System.out.println("Original : " +s);
		 StringBuilder sb = new StringBuilder(s);
		System.out.println("Reverse : " +sb.reverse());

	}

}
