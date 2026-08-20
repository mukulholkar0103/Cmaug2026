// Bonus question
import java.util.Scanner;
 class Bonus {
    public static void main(String[] args) {

     Scanner sc = new Scanner(System.in);
	System.out.println("Enter the Number");
	int num=sc.nextInt();

        switch (num) {
            case 1:
                 { int Math=80;
	              int Science=85;
	              int History=90;
	              int Avg=(Math+Science+History)/3;
	              System.out.println("Average" +Avg);
	              if(Avg>=90){
	                  System.out.println("Grade A");
	               }
	             else if(Avg>=70 && Avg<=89){
	                 System.out.println("Grade B");
		 
	              }
	             else if(Avg>=50 && Avg<=69){
	              System.out.println("Grade C");
		 
	               }
	             else if(Avg>=30 && Avg<=49){
	               System.out.println("Grade D");
		 
	               }
	             else{
	                 System.out.println("Fail");
	               }
	            }
                break;

            case 2:
                {
				 int Year=2013;
	             if (Year % 400 == 0 || (Year % 4 == 0 && Year % 100 != 0)){
	                System.out.println("Leap year");
	                }
	           else{
	              System.out.println("Not Leap year");
	               }
				
				}
                break;

            case 3:
            {
			int day = 3;

        switch (day) {
            case 1:
                System.out.println("Monday");
                break;

            case 2:
                System.out.println("Tuesday");
                break;

            case 3:
                System.out.println("Wednesday");
                break;

            case 4:
                System.out.println("Thursday");
                break;

            case 5:
                System.out.println("Friday");
                break;

            case 6:
                System.out.println("Saturday");
                break;

            case 7:
                System.out.println("Sunday");
                break;

            default:
                System.out.println("Invalid day");
        }
				}
                break;

            case 4:
                {
				  byte a = 0;
                  short b = 0;   
                  int c = 0;
                  long d = 0;
                  float e = 0.0f;
                  double f = 0.0;
                  char g = '\u0000';
                  boolean h = false;
				  
				  System.out.println("byte = " + a);
                  System.out.println("short = " + b);
                  System.out.println("int = " + c);
                  System.out.println("long = " + d);
                  System.out.println("float = " + e);
                  System.out.println("double = " + f);
                  System.out.println("char = " + g);
                  System.out.println("boolean = " + h);
				}
                break;
             default:
                break;
        }
    }
}