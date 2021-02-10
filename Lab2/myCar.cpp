//
//  myCar.cpp
//  Lab2
//
//  Created by Yusuke Tomatsu on 2021/02/10.
//

#include <stdio.h>
#include "myCar.h"
using namespace std;

// Define the prototype method
void Car::SetAll(std::string name, double fuel,
        double distance, double money, int password){
    this->name = name;
    this->fuel = fuel;
    this->distance = distance;
    this->money = money;
    this->password = password;
 }
 
// Define the constructor
Car::Car(std::string name, double fuel,
        double distance, double money, int password){
    this->name = name;
    this->fuel = fuel;
    this->distance = distance;
    this->money = money;
    this->password = password;
}
 
Car::Car(){
    this->name = "Yusuke";
    this->fuel = 100;
    this->distance = 0;
    this->money = 0;
    this->password = 0000;
}
 
Car::~Car(){
    std::cout << "Car " << this -> name <<
            " is destroyed\n";
}
 
void Car::Report(){
    std::cout << this -> name << " car has " <<
            this -> fuel <<
            "L remaining fuel and " << this -> distance <<
    " km passed" << "And you got "<< this -> money<<"$"<<std::endl;
    cout << "password is " << password << endl;
}
void Car::Move(){
    if (fuel >= 0) {
        distance += 10;
        fuel -= 10;
        money += 100;
    }
}
void Car::InputData(){
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "---------------" << endl;
    cout << "Create your password(0-9,4digits)" << endl;
    cin >> password;
    cout << "---------------" << endl;
}
void Car::StartEngine(){
    int temp;
    cout << "Enter your password(0-9,4digits)" << endl;
    cin >> temp;
    if(temp == password){
        cout << "Activated!" << endl;
    }else{
        cout << "Error" << endl;
        std::exit(1);
    }
}
void Car::Drive(){
    string temp;
    cout << "Do you drive?(y/n)" << endl;
    cin >> temp;
        if (temp == "y") {
            Move();
        }else{
            std::exit(1);
    }
}
