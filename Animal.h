//
// Created by David on 12/11/2025.
//

#ifndef MILESTONE_1_ANIMAL_H
#define MILESTONE_1_ANIMAL_H
#include <iostream>
using namespace std;


class Animal {
private:
    string name;
    int age ;
    bool isHungry;
public:
    Animal();
    Animal(string n, int a, bool h) {
        name = n;
        age = a;
        isHungry = h;
    }
    ~Animal() {}

    // methods
    void display();
    void feed();
    string getName();
    int getAge();
    bool getIsHungry();
    void setName(string n);
    void setAge(int a);
    void setIsHungry(bool f);

};
#endif //MILESTONE_1_ANIMAL_H
