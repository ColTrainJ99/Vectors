//
//  geom_Vector3D.h
//  VectorsAssignment
//
//  Created by Colby Dorsey on 4/6/20.
//  Copyright © 2020 Colby Dorsey. All rights reserved.
//

#ifndef geom_Vector3D_h
#define geom_Vector3D_h
#include <iostream>

using namespace std ;

struct geom_Point3D{
    float X ;
    float Y ;
    float Z ;
}; 

class geom_Vector3D{
    private :
    float X ;
    float Y ;
    float Z ;
public:
    geom_Vector3D(float a, float b, float c);
    geom_Vector3D addPoint(geom_Point3D A );
    geom_Vector3D subPoint(geom_Point3D S );
    geom_Vector3D operator+(geom_Vector3D right);
    friend geom_Vector3D operator-(geom_Vector3D up, geom_Vector3D down);
    float operator*(geom_Vector3D multiples) ;
    geom_Vector3D operator^(geom_Vector3D power);
    geom_Vector3D friend operator/(geom_Vector3D numerator, float denominator);
    bool friend operator==(geom_Vector3D T, geom_Vector3D F);
    float operator ()();
    friend ostream& operator <<(ostream& In, geom_Vector3D output);
    friend istream& operator >>(istream& Out, geom_Vector3D input);
    float operator %(geom_Vector3D percentage);
}; 


#endif /* geom_Vector3D_h */
