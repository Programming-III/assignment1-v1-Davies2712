//
// Created by David on 12/11/2025.
//

#ifndef MILESTONE_1_REPTILE_H
#define MILESTONE_1_REPTILE_H
#include <iostream>
using namespace std;

#include "Animal.h"

class Reptile : public Animal {
private:
    bool isVenomous;
    public:
    Reptile();
    Reptile(string n, int a, bool h,bool v) : Animal(n,a,h) {
        isVenomous=v;
    }

    ~Reptile();
    void setVenomous(bool v);
    bool getVenomous();





};
#endif //MILESTONE_1_REPTILE_H
