//
// Created by 99087 on 2023/2/14.
//
#include <iostream>
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main(void)
{
    std::cout << "plot" << std::endl;
    plt::plot({1,3,2,4});
    plt::show();
}