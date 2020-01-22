//
// Created by Kevin Stradtman on 1/22/2020.
//

#include "Person.h"

Person::Person() {
    name = "Kevin";
}

string Person::toString() {
    return "Person's name is: " + name;
}
void Person::setName(string newName) {
    name = newName;
}

string Person::getName() {
    return name;
}