//
//  main.cpp
//  VAR2
//
//  Created by Nils Burlat on 26/10/2017.
//  Copyright © 2017 Nils Burlat. All rights reserved.
//

#include "DisplaySurface.hpp"

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "Hello, VAR2 !\n";
    
    DisplaySurface front(Point(-150, -150, -150), Vector(300, 0, 0), Vector(0, 300, 0));
    DisplaySurface left(Point(-150, -150, 150), Vector(0, 0, -300), Vector(0, 300, 0));
    DisplaySurface right(Point(150, -150, -150), Vector(0, 0, 300), Vector(0, 300, 0));
    DisplaySurface floor(Point(-150, -150, 150), Vector(300, 0, 0), Vector(0, 0, -300));
    
    return 0;
}
