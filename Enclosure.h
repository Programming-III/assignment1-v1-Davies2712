//
// Created by David on 12/11/2025.
//

#ifndef MILESTONE_1_ENCLOSURE_H
#define MILESTONE_1_ENCLOSURE_H
#include <iostream>
using namespace std;

#include <string>

#include "Animal.h"

class Enclosure : public Animal{
private:
    Animal* animal;
    int capacity;
    int currentCount;
    public:
    Enclosure();
    Enclosure(string n, int a, bool h,Animal* a) : Animal(n,a,h) {
        animal=new Animal[];
    }

    ~Enclosure() {
        delete []animal;
    }

    void setCapacity(int c);
    void setCurrentCount(int c);
    Animal* getAnimal();
    int getCapacity();
    int getCurrentCount();
    void setAnimal(Animal a);



};
#endif //MILESTONE_1_ENCLOSURE_H
