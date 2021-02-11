//
//  IceCreamCar.hpp
//  Lab2-2
//
//  Created by Yusuke Tomatsu on 2021/02/11.
//

#ifndef IceCreamCar_hpp
#define IceCreamCar_hpp

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "myCar.h"

class IceCreamCar: public Car{
private:
    int numberOfIceCream = 10;
public:
    void SellIceCream();
    void Report();
    // The IceCream car's constructor
    IceCreamCar(std::string, double, double,double,int,int);
    // The default constructor calls Car default
    // constructor
    IceCreamCar(): Car(){};
};
#endif /* IceCreamCar_hpp */
