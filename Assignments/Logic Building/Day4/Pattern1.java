//Q15 Pattern
 class Pattern1{
 public static void main(String[] args){
     int  num= 5;
	 for(int i=1; i<=num;i++){
	  for(int j=i ; j<num; j++ ){
	     System.out.print("");
	  }
	  for(int j=1 ; j<=i; j++ ){
	     System.out.print(+i + "*");
	  }
	  System.out.println();
	 }
	 for(int i=num; i>=1;i--){
	  for(int j=num ; j>i; j-- ){
	     System.out.print("");
	  }
	  for(int j=1 ; j<=i; j++ ){
	     System.out.print(+i +"*");
	  }
	  System.out.println();
	 }
   }
 }