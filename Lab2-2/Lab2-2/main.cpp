//
//  main.cpp
//  Lab2
//
//  Created by Yusuke Tomatsu on 2021/02/04.
//

#include "myCar.h"
#include "SportsCar.hpp"
#include "IceCreamCar.hpp"

int main()
{
    // Create object without setting values in constructor
    IceCreamCar yusuke;
    yusuke.SellIceCream();
    yusuke.Report();
    yusuke.InputData();
    yusuke.StartEngine();
    yusuke.RefuelTheCar();
    while (yusuke.GetFuel()>0) {
        yusuke.Drive();
        yusuke.Report();
    }
    return 0;
}

