//
//  DisplaySurface.hpp
//  VAR2
//
//  Created by Nils Burlat on 02/11/2017.
//  Copyright © 2017 Nils Burlat. All rights reserved.
//

#ifndef DisplaySurface_hpp
#define DisplaySurface_hpp

#include "Point.hpp"
#include "Vector.hpp"

#include <stdio.h>


class DisplaySurface
{
public:
    
    DisplaySurface(const Point& orig, const Vector& uvector, const Vector& vvector);
    
private:
    Point m_origin;
    Vector m_u;
    Vector m_v;
};

#endif /* DisplaySurface_hpp */
