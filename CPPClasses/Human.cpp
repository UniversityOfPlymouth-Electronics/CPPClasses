//
//  Human.cpp
//  CPPClasses
//
//  Created by Nicholas Outram on 28/09/2017.
//  Copyright © 2017 Nicholas Outram. All rights reserved.
//

#include "Human.hpp"

//No pointer is passed as it is hidden - it is called "this"
Human::Human(int age, float weight, float height) {
    this->age = age;
    this->weight = weight;
    this->height = height;
    updateBMI();
}

void Human::updateBMI() {
    this->bmi = this->weight / (this->height * this->height);
}
