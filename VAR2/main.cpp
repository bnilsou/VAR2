//
//  main.cpp
//  VAR2
//
//  Created by Nils Burlat on 26/10/2017.
//  Copyright © 2017 Nils Burlat. All rights reserved.
//

#include "DisplaySurface.hpp"
#include "Matrix4x4.hpp"

#include <iostream>
#include <vector>

Matrix4x4 viewingMatrix(DisplaySurface display, Point eye)
{
    Matrix4x4 matrix;
    
    Vector u = Vector(display.u());
    u.normalize();
    Vector v = Vector(display.v());
    v.normalize();
    Vector n = Vector(display.normal());
    
    // right column
    matrix.m[0][0] = u.dx();
    matrix.m[0][1] = u.dy();
    matrix.m[0][2] = u.dz();
    matrix.m[0][3] = - u.scalar(eye);
    matrix.m[1][0] = v.dx();
    matrix.m[1][1] = v.dy();
    matrix.m[1][2] = v.dz();
    matrix.m[1][3] = - v.scalar(eye);
    matrix.m[2][0] = n.dx();
    matrix.m[2][1] = n.dy();
    matrix.m[2][2] = n.dz();
    matrix.m[2][3] = - n.scalar(eye);
    matrix.m[3][0] = 0;
    matrix.m[3][1] = 0;
    matrix.m[3][2] = 0;
    matrix.m[3][3] = 1;
    
    return matrix;
}

int main(int argc, const char * argv[]) {
    std::cout << "Hello, VAR2 !\n";
    
    DisplaySurface front(Point(-150, -150, -150), Vector(300, 0, 0), Vector(0, 300, 0));
    DisplaySurface left(Point(-150, -150, 150), Vector(0, 0, -300), Vector(0, 300, 0));
    DisplaySurface right(Point(150, -150, -150), Vector(0, 0, 300), Vector(0, 300, 0));
    DisplaySurface floor(Point(-150, -150, 150), Vector(300, 0, 0), Vector(0, 0, -300));

    
    Matrix4x4 mFront = viewingMatrix(front, Point(50, 20, 100));
    mFront.print();
    
    Matrix4x4 mLeft = viewingMatrix(left, Point(50, 20, 100));
    mLeft.print();
    
    Matrix4x4 mRight = viewingMatrix(right, Point(50, 20, 100));
    mRight.print();
    
    Matrix4x4 mFloor = viewingMatrix(floor, Point(50, 20, 100));
    mFloor.print();
    
    return 0;
}
