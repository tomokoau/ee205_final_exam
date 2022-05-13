//
// Created by Tomoko Austin on 5/13/22.
//
#pragma once

#include <iostream>
class Shape{
public:
    int compute_area();
};

class Rectangle:public Shape{
protected:
    int length;
    int width;
public:
    Rectangle (double newLength, double newWidth) {


                if (newLength<=0)
                cout<<"length and width must be >0"<< endl;
                else
                length = newLength;


                if (newWidth<=0)
                cout<<"length and width must be >0"<< endl;
                else
                width = newWidth;

    }

        double getLength() {

            return length;
        }
        double getwidth() {

            return width;
        }


};
class Square: public Rectangle(double newLength){
public:

    Square (double newSide);
    Rectangle(newSide);

    int getSide(){
    return newSide;
    }
};
