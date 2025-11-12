//
// Created by David on 12/11/2025.
//

#ifndef MILESTONE_1_BIRD_H
#define MILESTONE_1_BIRD_H
#include <iostream>

#include "Animal.h"
using namespace std;

class Bird : public Animal {
private:
    float wingSpan;
    public:
    Bird();
    Bird(string n, int a, bool h,float ws) : Animal(n,a,h) {
        wingSpan=ws;
    }
    ~Bird();
    void setWingSpan(float ws);
    float getWingSpan();

};
#endif //MILESTONE_1_BIRD_H
