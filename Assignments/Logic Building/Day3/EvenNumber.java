// Q3 Even Number Using While Loop

 class EvenNumber{
  static void Even(){
   int num=1;
   while(num<=50){
    if(num%2==0){
	 System.out.print(num + "");
	}
	num++;
   }
  }
    public static void main(String[] args){
	 EvenNumber.Even();
	}
 
 }