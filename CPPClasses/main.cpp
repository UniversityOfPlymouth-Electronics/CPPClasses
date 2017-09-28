//
//  main.cpp
//  CPPClasses
//
//  Created by Nicholas Outram on 28/09/2017.
//  Copyright © 2017 Nicholas Outram. All rights reserved.
//

#include <iostream>
#incude "Human.hpp"

int main(int argc, const char * argv[]) {
    //This looks the same?
    Human person1;
    
    //Set properties
    person1.age = 35;
    person1.weight = 87.0;
    person1.height = 1.81;
    
    //Caluclate BMI
    person1.bmi = person1.weight / (person1.height * person1.height);
    //Display
    printf("Weight: %f, Height: %f, BodyMassIndex: %f\n", person1.weight, person1.height, person1.bmi);
    
    //Designated initialiser
    struct Human person2 = { .age = 45, .weight = 97.0, .height = 1.6, .bmi = 0.0} ;
    person2.bmi = person2.weight / (person2.height * person2.height);
    printf("Weight: %f, Height: %f, BodyMassIndex: %f\n", person2.weight, person2.height, person2.bmi);

    
    return 0;
}
