//
//  main.cpp
//  Lab2
//
//  Created by Yusuke Tomatsu on 2021/02/04.
//

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
using namespace std;
class Car{
    
private:
    std::string name;
    double fuel;
    double distance;
    double money;
    int password;
public:
    std::string GetName(){return name;}
    void SetName(std::string name){this->name = name;}
    double GetFuel(){return fuel;}
    void SetFuel(double fuel){this->fuel = fuel;}
    double GetDistance(){return distance;}
    void SetDistance(double distance){this->distance = distance;}
    void SetMoney(double money){this->money = money;}
    void SetPassword(int password){this->password = password;}
    // You can declare function prototypes
    void SetAll(std::string, double, double, double,int);
    void Move();
    void InputData();
    void StartEngine();
    void Drive();
    // A constructor is called each time an object is created
    Car(std::string, double, double,double,int);
    // Create an overloaded constructor for when no data is passed
    Car();
    // A deconstructor is called automatically when an object
    // is deleted or is no longer used
    // The default is fine, but you should create custom ones
    // when you must release memory, or resources
    ~Car();
    // Created to be overwritten
    void Report();
};
 
// Refer to class fields and methods with ::
//int Animal::numOfAnimals = 0;
 
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
            " destroyed\n";
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

 
// Through inheritance a class inherits all fields and methods
// defined by the super, or inherited from class
//class Dog: public Animal{
//private:
//    std::string sound = "Wooof";
//public:
//    // You can access to the private field name
//    // by calling GetName()
//    void MakeSound(){
//        std::cout << "The dog " <<
//                this->GetName() << " says " <<
//                this->sound << "\n";
//    }
//
//    // The Dogs constructor
//    Dog(std::string, double, double, std::string);
//
//    // The default constructor calls Animals default
//    // constructor
//    Dog(): Animal(){};
//
//    // Overwrite ToString
//    void ToString();
//
//};
 
// Calls the superclasses constructor to handle
// initalization
//Dog::Dog(std::string name, double height,
//double weight, std::string sound) :
//Animal(name, height, weight){
//    this -> sound = sound;
//}
//
//// Overwrite ToString
//void Dog::ToString(){
//    // Because the attributes were private in Animal they must be retrieved
//    // by called the get methods
//    std::cout << this -> GetName() << " is " << this -> GetHeight() <<
//            " cms tall, " << this -> GetWeight() <<
//            " kgs in weight and says " << this -> sound << "\n";
//}
 
int main()
{
    // Create object without setting values in constructor
    Car yusuke;
    yusuke.Report();
    yusuke.InputData();
    yusuke.StartEngine();
    while (yusuke.GetFuel()>0) {
        yusuke.Drive();
        yusuke.Report();
    }
    return 0;
}

