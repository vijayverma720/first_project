#include<iostream>
using namespace std;
class car{
    public:
    string car_brand;
    long car_price1;
    long car_price2;
    void input();
    void compare();
    void display();
};

void car::input(){
    cout <<"Enter car Brand Name: ";
    cin >> car_brand;
    cout<<"Enter car Price: ";
    cin >> car_price1;
    cout<<"Enter second car Price: ";
    cin >> car_price2;
}

void car::compare(){
    if(car_price1==car_price2){
        cout<<"Both car has same price";
    }
    else if (car_price1>car_price2){
        cout<<"Buy second car";
    }
    else if(car_price1<car_price2){
        cout<<"buy first car";
    }
    else{
        cout <<"enter car details again";
    }
}

void car::display(){
    input();
    cout <<"Your car brand Name is :" << car_brand << endl;;
    cout << " Your car price is: "<< car_price1 <<" and "<< car_price2 <<endl;
    compare();
    cout << endl;

}
int main(){
    car c1,c2;
    c1.display();
    c2.display();
    return 0;
}