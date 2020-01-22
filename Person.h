//
// Created by Kevin Stradtman on 1/22/2020.
//

#ifndef CLASSES_PERSON_H
#define CLASSES_PERSON_H

#include <iostream>
using namespace std;


class Person {
private:
    string name;
public:
    Person();
    string toString();
    void setName(string newName);
    string getName();
};


#endif //CLASSES_PERSON_H
