
public class StringDemo3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		String s="The quick brown fox jumps over the lazy dog";
		for(char ch ='a';ch<='j';ch++) {
			System.out.print(ch + " ");
		}
		System.out.println( );
		System.out.println("========================================== ");
		for(char ch ='a';ch<='j';ch++) {
			System.out.print(s.indexOf(ch) + " ");
		}
		for(char ch ='k';ch<='t';ch++) {
			System.out.print(ch + " ");
		}
		System.out.println( );
		System.out.println("========================================== ");
		for(char ch ='k';ch<='t';ch++) {
			System.out.print(s.indexOf(ch) + " ");
		}
		for(char ch ='u';ch<='z';ch++) {
			System.out.print(ch + " ");
		}
		System.out.println( );
		System.out.println("========================================== ");
		for(char ch ='u';ch<='z';ch++) {
			System.out.print(s.indexOf(ch) + " ");
		}
	}

}
