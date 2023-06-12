#include<iostream>
#include "Cube.h"

int main() {
    Cube cube;

    cube.setLength(3.5);
    double vol = cube.getVolume();

    std::cout << "Volume" << vol << std::endl;

    return 0;
    
}


