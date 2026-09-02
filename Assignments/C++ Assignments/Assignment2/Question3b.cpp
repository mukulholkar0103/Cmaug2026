#include<iostream>
using namespace std;
namespace Physics {
double clamp(double val, double min, double max){
    if (val < min)
            return min;

    if (val > max)
            return max;

        return val;

}  
double lerp(double a, double b, double t){
    return a + (b - a) * t;

}        

}
// linear interpolation for 
namespace GameMath {
int clamp(int val, int min, int max){
    if (val < min)
            return min;

    if (val > max)
            return max;

        return val;

}              

double lerp(double a, double b, double t){
     return a + (b - a) * t;
}         
}
int main(){
    
    double velocity = Physics::clamp(120.5, 0.0, 100.0);

    int health = GameMath::clamp(120, 0, 100);

    cout << "Physics Velocity : " << velocity << endl;
    cout << "Game Health : " << health << endl;
    
    double physicsResult = Physics::lerp(10.0, 20.0, 0.5);
    double animationResult = GameMath::lerp(0.0, 100.0, 0.25);

    cout << "Physics Lerp : " << physicsResult << endl;
    cout << "GameMath Lerp : " << animationResult << endl;

     {
        using namespace Physics;

        double result = clamp(150.0, 0.0, 100.0);

        cout << "Using Physics namespace : "
             << result << endl;
    }


    return 0;

}
