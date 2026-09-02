#include<iostream>
using namespace std;
// integer quantity
double reorderCost(double qty, double unitPrice){
return qty*unitPrice;
} 
// integer quantity       
double reorderCost(int qty, double unitPrice){
return qty*unitPrice;
}          
double reorderCost(int qty, double unitPrice, double taxRate){
    double cost= qty*unitPrice;
    double tax= cost*taxRate/100;
    return tax+cost;
}  // with tax
double applyDiscount(double price, double discountPercent = 10.0){
    return price - (price * discountPercent / 100);
}
// If no discount is passed, apply 10% by default


int main(){
     // Calling first overloaded function
    double cost1 = reorderCost(10, 50.0);

    // Calling second overloaded function
    double cost2 = reorderCost(10.5, 50.0);

    // Calling third overloaded function
    double cost3 = reorderCost(10, 50.0, 18.0);

    // Calling discount with default 10%
    double discount1 = applyDiscount(1000);

    // Calling discount with custom discount
    double discount2 = applyDiscount(1000, 20.0);

    cout << "Integer Quantity Cost : " << cost1 << endl;
    cout << "Fractional Quantity Cost : " << cost2 << endl;
    cout << "Cost With Tax : " << cost3 << endl;

    cout << "Discount with Default 10% : " << discount1 << endl;
    cout << "Discount with 20% : " << discount2 << endl;

    return 0;
}