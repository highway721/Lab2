//
//  SportsCar.hpp
//  Lab2-2
//
//  Created by Yusuke Tomatsu on 2021/02/11.
//

#ifndef SportsCar_hpp
#define SportsCar_hpp

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "myCar.h"

class SportsCar: public Car{
public:
    void ShowOff();
    // The Sports car's constructor
    SportsCar(std::string, double, double,double,int);
    // The default constructor calls Car default
    // constructor
    SportsCar(): Car(){};
};

#endif /* SportsCar_hpp */
