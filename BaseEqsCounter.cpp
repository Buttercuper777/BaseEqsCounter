//
// Created by mac on 27.12.2022.
//


#include <iostream>
#include "./external/rang/include/rang.hpp"
#include "./src/BaseEquation/Equation.h"
#include "src/BaseEquation/Equation.h"

int main(int argc, char *argv[]) {

    rang::setControlMode(rang::control::Auto);
    rang::setWinTermMode(rang::winTerm::Auto);

    Equation EQ = Equation();
    EQ.EQ_AddEquation(1, -8, 16);
    EQ.EQ_CalcRoots();
    EQ.EQ_PrintRoots();


//    double a = 10;
//    std::cout  << a * (-1) << std::endl;
    return 0;
}