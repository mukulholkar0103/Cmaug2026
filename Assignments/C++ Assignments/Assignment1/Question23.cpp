#include<iostream>
using namespace std;

int main(){
    
int statusReg  = 0b10110001;  // Read-only from firmware side 
int controlReg = 0b00000000;  // Firmware writes here 
int dataReg    = 0b11001010;   // For reassignment dem0

 const int*regPtr1=&statusReg;  // Pointer to constant integer(Value canot be change)
   cout << "Status Register : "<< *regPtr1 << endl;  // *regPtr1 = 50;
    // ERROR:
    // Cannot modify the value through a pointer
    // to const.

    // regPtr1 = &dataReg;
    // This is allowed because the pointer itself
    // is NOT const.


  int* const regPtr2=&controlReg ;//Constant Pointer to an integer(address canot be changed)
             
    cout <<  "Control Register :  "<< *regPtr1 << endl;
      // regPtr2 = &dataReg;
    // ERROR:
    // regPtr2 is a const pointer.
    // It cannot point to another address.
   const int* const regPtr3=&dataReg ;//Constant pointer to a constant integer(neither value is change nor adress is changed)
   cout<<"Data Register :"<<*regPtr3<<endl;
   // *regPtr3 = 20;
    // ERROR:
    // Cannot modify the value.

    // regPtr3 = &dataReg;
    // ERROR:
    // Cannot change the address because
    // the pointer itself is const.

return 0;
}