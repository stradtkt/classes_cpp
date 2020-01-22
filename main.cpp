#include <iostream>
#include "Person.h"

using namespace std;



int main() {
    Person person;
    person.setName("Kathleen");
    cout << person.toString() << endl;
    return 0;
}
