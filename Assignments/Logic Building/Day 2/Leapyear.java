// Q2 Check Leap Year

class Leapyear{
 public static void main(String[] args){
    int Year=2013;
	if(Year%4==0 && Year%400==0 && Year%100!=0){
	  System.out.println("Leap year");
	}
	else{
	     System.out.println("Not Leap year");
	   }
 }
}