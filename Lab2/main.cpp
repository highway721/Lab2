//
//  main.cpp
//  Lab2
//
//  Created by Yusuke Tomatsu on 2021/02/04.
//

#include "myCar.h"

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

