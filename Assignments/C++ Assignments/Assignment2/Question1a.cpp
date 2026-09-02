#include<iostream>
using namespace std;
class Product{
 private:
int productId;
string name;
double price;
int quantity;
static int ProductCount;

public:
Product(){
    ProductCount++;
    productId= 1000+ProductCount;
}
void acceptDetails(){
    cout<<"Enter Product id :";
    cin>>productId;
    cout<<" Enter name :";
    cin>> name;
    cout<<" Enter price :";
    cin>>price;
    cout<<"Enter Quantity :";
    cin>> quantity;

}                 
void displayDetails( ) const{
    cout << productId << "\t"
             << name << "\t"
             << price << "\t"
             << quantity << "\t"
             << price * quantity << endl;
}          
double totalValue() const{
    return price*quantity;

} 
bool isLowStock(int threshold) const{
    return quantity<threshold;

}
string getName() const
{
    return name;
}
};
int Product::ProductCount=0;
int main(){
     int highindex=0;
     int threshold;
     
     Product product[5];
     for(int i=0 ;i<5; i++){
        cout<<" THe product ==" <<endl;
        product[i].acceptDetails();
     }
     cout<<"Enter Threshold";
     cin>>threshold;
    cout << "\n========== INVENTORY REPORT ==========\n";
    cout << "Id\tName\tPrice\tQty\tTotal Value\n";
     for(int i = 0; i < 5; i++)
     {
            product[i].displayDetails();
     }
     for(int i=0; i<5; i++){
       if(product[i].totalValue() > product[highindex].totalValue())
    {
        highindex = i;
    }
     }
     cout << "\nHighest Value Product : "<< product[highindex].getName()<< " (" << product[highindex].totalValue() << ")"<< endl;
      cout << "Low Stock (threshold: "<< threshold << ") : ";
      for(int i = 0; i < 5; i++)
    {
        if(product[i].isLowStock(threshold))
        {
            cout << product[i].getName() << " ";
        }
    }

    cout << endl;
    return 0;

}

