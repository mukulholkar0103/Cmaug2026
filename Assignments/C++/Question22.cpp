#include<iostream>
#include<cmath>
using namespace std;
double computeRMS(double* signal , int n){
    double *ptr = signal;
    double sum=0;
    for(int i=0 ;i<n; i++){
        sum= sum +(*ptr * *ptr);
        ptr++;

    }
    double avg=sum/n;
    return sqrt(avg);

}
void normalise( double *signal,int n){
 double maxAbs = 0;
 double* ptr = signal;
 for(int i=0; i<n; i++){
    if(fabs(*ptr)>maxAbs){
        maxAbs=fabs(*ptr);
    }
    ptr++;
 }
 cout<<endl;
 ptr = signal;
 for(int i=0;i<n ; i++){
   *ptr = *ptr / maxAbs;
   ptr++;
 }
}
int countZeroCrossings(double * signal, int n){
    double* ptr = signal;
    int count=0;
    for (int i =0; i< n-1 ;i++){
       if((*ptr < 0 && *(ptr + 1) > 0)||(*ptr > 0 && *(ptr + 1) < 0)){
         count++;
       }
       ptr++;
    }
    return count;
}
void applyGain( double *signal , int n, double gainFactor){
    double* ptr = signal;
    for(int i = 0; i < n; i++)
{
    *ptr= *ptr * gainFactor;
    ptr++;
}
cout<<endl;
    
}
int main(){
    int n;
    cout<<"enter the value of the signal";
    cin>>n;
    double signal[n];
    for(int i = 0; i < n; i++)
{
    cin >> signal[i];
}
cout << "Original signal: ";

for(int i = 0; i < n; i++)
{
    cout << signal[i] << " ";
}
normalise(signal, n);
cout << "\nAfter normalise: ";

for(int i = 0; i < n; i++)
{
    cout << signal[i] << " ";
}
    double gainFactor;
    cout<<"Enter the gainFactor"<<endl;
    cin>>gainFactor; 
    applyGain(signal, n, gainFactor);
    cout << "\nAfter normalise: ";

for(int i = 0; i < n; i++)
{
    cout << signal[i] << " ";
}
cout << "\nRMS = " << computeRMS(signal, n);
cout << "\nZero Crossings = "<< countZeroCrossings(signal, n);
    

    

    return 0;
}