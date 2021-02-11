//
//  myCar.h
//  Lab2
//
//  Created by Yusuke Tomatsu on 2021/02/10.
//

#ifndef myCar_h
#define myCar_h
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>


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
    double GetMoney(){return money;}
    void SetMoney(double money){this->money = money;}
    void SetPassword(int password){this->password = password;}
    // You can declare function prototypes
    void SetAll(std::string, double, double, double,int);
    void Move();
    void RefuelTheCar();
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

#endif /* myCar_h */
