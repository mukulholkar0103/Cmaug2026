#include<iostream>
using namespace std;
bool parsePacket(const int* rawData, int size,
int** outMin, int** outMax){
const int* minPtr = rawData;
    const int* maxPtr = rawData;

    // Find min and max
    for (int i = 1; i < size; i++) {

        if (*(rawData + i) < *minPtr) {
            minPtr = rawData + i;
        }

        if (*(rawData + i) > *maxPtr) {
            maxPtr = rawData + i;
        }
    }



    *outMin = const_cast<int*>(minPtr);
    *outMax = const_cast<int*>(maxPtr);

 return true;
}
int main(){
int packet[] = {45, 12, 67, 8, 55, 31};
int* minPtr = nullptr;
int* maxPtr = nullptr;
if (parsePacket(packet, 6, &minPtr, &maxPtr)) {
cout << "Calibration Min : " << *minPtr << endl;
cout << "Calibration Max : " << *maxPtr << endl;
}
    return 0;
}