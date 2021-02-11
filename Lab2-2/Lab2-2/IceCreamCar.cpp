//
//  IceCreamCar.cpp
//  Lab2-2
//
//  Created by Yusuke Tomatsu on 2021/02/11.
//

#include "IceCreamCar.hpp"
using namespace std;

// Calls the superclasses constructor to handle
// initalization
IceCreamCar::IceCreamCar(std::string name, double fuel, double distance, double money, int password, int numberOfIceCream):
    Car(name, fuel, distance, money, password){
    this -> numberOfIceCream = numberOfIceCream;
}
void IceCreamCar::Report(){
    std::cout << this -> GetName() << " car has " <<
            this -> GetFuel() <<
            "L remaining fuel and " << this -> GetDistance() <<
    " km passed" << " And you got "<< this -> GetMoney()<<"$"<<std::endl;
    cout << "You have " << numberOfIceCream <<" ice cream" << endl;
}
void IceCreamCar::SellIceCream(){
    cout << "I have "<< this->numberOfIceCream << " ice cream, Yummy" << endl;
    if(numberOfIceCream > 0){
        cout << "Free ice cream, enjoy!" << endl;
        numberOfIceCream -= 1;
    }else{
        cout << "Sorry, I do not have ice cream..." << endl;
    }
}
