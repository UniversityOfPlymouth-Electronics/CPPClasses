//
//  Human.cpp
//  CPPClasses
//
//  Created by Nicholas Outram on 28/09/2017.
//  Copyright © 2017 Nicholas Outram. All rights reserved.
//

#include "CHuman.hpp"
//No pointer is passed as it is hidden - it is called "this"
CHuman::CHuman(int age, float weight, float height) {
    this->_age = age;
    this->_weight = weight;
    this->_height = height;
    this->_needsUpdate = true;
}

void CHuman::display() {
    printf("Weight: %f, Height: %f, BodyMassIndex: %f", _weight, _height, this->bmi());
    if (this->bmi() > 25.0) {          //ALWAYS USE THE ACCESSOR
        printf("*\n");
    } else {
        printf("\n");
    }
}

//Read-only accessors
float CHuman::weight() {
    return _weight;     //return a copy
}
float CHuman::height() {
    return _height;
}
inline float CHuman::bmi() {
    if (this->_needsUpdate == true) {
        this->_bmi = this->_weight / (this->_height * this->_height);   //Assuming this is expensive
        this->_needsUpdate = false; //Flag that the bmi is up to date
    }
    return this->_bmi;
}

//Update the weight and hight
float CHuman::updateWeight(double w) {
    float temp = _weight;
    _weight = w;
    this->_needsUpdate = true;      //Flag that _bmi is out of date
    return temp;
}

float CHuman::updateHeight(double h) {
    float temp = _height;
    _height = h;
    this->_needsUpdate = true;      //Flag that _bmi is out of date
    return temp;
}






