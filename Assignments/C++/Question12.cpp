#include<iostream>
using namespace std;


int main(){
    
    int reading;
    cin>> reading;
    double arr[reading];
    int skip=0;
    int index=-1;
    double sum=0;
    double avg=0;
    int warning=0;
    int normal=0;
    int critical=0;
    int shutdown=0;
   
    cout<<" Reading enterd"<<reading;
 
    double max = arr[0];
    double min = arr[0];
    // input reading
     for(int i=0; i<reading; i++){
        cin>>arr[i];
    }
    //find skip and first critical temerature
    for(int i=0; i<reading;i++){
         if(arr[i]<0){
            skip++;
            continue;
        }
        
        if(arr[i]>=45){
           index=i;
           break;
        }
    }
    //Display Reading
    cout<<"Valid Reading :   ";
    for(int i=0; i<reading; i++){
        cout<<arr[i];
        
    }
    cout<< endl;
    cout<<" Skipped  (errors) :" <<skip<<endl;
    cout<<" First CRITICAL  :  Index"<<index<<"->"<< arr[index]<<endl;
    for(int i=0;i< reading ;i++){
         if(arr[i]>max){
            max=arr[i];
         }
         if(arr[i]<min){
            min=arr[i];
         }
       
            sum=sum+arr[i];
         if (arr[i] < 30) {
            normal++;
        }
        else if (arr[i] < 45) {
            warning++;
        }
        else if (arr[i] < 60) {
            critical++;
        }
        else {
            shutdown++;
        }
        
    }
    avg =sum/reading;
    cout<<" Min :"<<min<<"Max :"<<max <<"Avg :"<<avg;


    return 0;

}