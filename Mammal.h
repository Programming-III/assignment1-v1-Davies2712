//
// Created by David on 12/11/2025.
//

#ifndef MILESTONE_1_MAMMAL_H
#define MILESTONE_1_MAMMAL_H
#incloud <iostream>
#include <string>

#include "Animal.h"

using namespace std;
class Mammal : public Animal {
    private:
    string furColor;
    public:
    Mammal(){};//error expected
    Mammal(string n, int a, bool h,string f) : Animal(n,a,h) {
        furColor = f;
    }
    ~Mammal(){};

    void setFurColor(string fc);
    string getFurColor();


};

#endif //MILESTONE_1_MAMMAL_H
