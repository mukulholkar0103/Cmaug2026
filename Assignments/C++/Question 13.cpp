#include<iostream>
using namespace std;
void warningCount (double arr[3][3] ,int &warn){
     warn=0;
     for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
          if(arr[i][j]>=30 && arr[i][j]<=44){
              warn++;

    }
   

        }
        
    }
    
    cout<<"Rooms at  WARNING or above:"<<warn;
}

void hottestRoom(double arr[3][3],double &hot, int &floor ,int &room){
 hot=arr[0][0];
 floor=0;
 room=0;
for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
           if(hot<arr[i][j]) {
            hot=arr[i][j];
            floor=i+1;
            room=j+1;
           }
        }
        
    }
    cout<<"Hottest Room :"<<"Floor "<<floor <<","<<"Room "<<room<<"-> "<<hot<<"C";    
}
void hottestFloor(double arr[3][3],double &maxavg, int &floor){
     maxavg= 0;
     floor=0;
     for(int i=0; i<3;i++){
        int sum=0;
        for(int j=0; j<3; j++){
            sum=sum+arr[i][j];
        }
        double avg=sum/3;
        if(avg > maxavg) {
            maxavg = avg;
            floor = i + 1;
        }
        
    }

  cout<<"Hottest Floor :"<<"Floor  "<<floor <<"("<<"avg"<<maxavg<<"C"<<")";
    

}
void readSpace(double arr[3][3]){
cout<<"\tRoom1\tRoom2\tRoom3 "<<endl;
   for(int i=0; i<3;i++){
    cout<<"Floor"<<i+1<<":";
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<< endl;
    }

}
int main(){

 
    double arr[3][3];
    double hottest,avg;
    int floor,room,warn;
    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            cin>> arr[i][j];
        }
        
    }
 
    readSpace(arr);
    hottestRoom(arr,hottest,floor,room);
    hottestFloor(arr,avg,floor);
    warningCount(arr,warn);
    

    return 0;
}