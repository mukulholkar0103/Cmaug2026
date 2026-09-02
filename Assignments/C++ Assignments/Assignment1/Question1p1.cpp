// Question 1
#include<iostream>
using  namespace std;
int statusCode(double reading){
    if(reading<0){
        return -1;
    }
    else if(reading>=0 && reading<=29){
        return 0;

    }
    else if(reading>=30 && reading<=44){
        return 1;

    }
    else if(reading>=45 && reading<=59){
        return 2;

    }
    else{
        return 3;
    }

}
void statusLabel(int status){
    switch(status){
      case -1:
          cout<<"Status Label:  Sensor_error"<<endl;
          cout<<"Sensor fault - check wiring"<<endl;
          break;
      case 0:
          cout<<"Status Label:  Normal"<<endl;
          cout<<"Action:  No action Required"<<endl;
 
      case 1:
          cout<<"Status Label:  Warning"<<endl;
          cout<<"Action:  Alert send to supervised"<<endl;  
          break;
      case 2:
        cout<<"Status Label:  Critical"<<endl;
        cout<<"Action:  Cooling System trigged "<<endl;
        break;
      default:
          cout<<"Status Label:  ShutDown"<<endl;
          cout<<"Action:  Emergency shutdown initiated"<<endl;
          break;
    }
}


int main(){
 double reading;
  cin>> reading;
  int status=statusCode(reading);
   
   
   int fahrenheit;
   fahrenheit=(reading*9/5)+32;
   cout<<"Temperature  "<< reading<<"C  "<<"/  "<<fahrenheit<<"F"<<endl;
   statusLabel( status);
   (reading>=25)? cout<<"Reading:   Above Average":cout<<" Reading : Below Average";

    return 0;
}