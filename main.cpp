//
// Created by David on 12/11/2025.
//
#include <iostream>

#include "Enclosure.h"
#include "Reptile.h"
#include "Visitor.h"
using namespace std;
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"

//Animal class(super)
void Animal::display() {
    cout<<"animal name is: "<<getName()<<endl;
    cout << "age is: "<<getAge()<<endl;
    cout << "is hungry: "<<boolalpha<<isHungry()<<endl;
}

void Animal::feed() {
    if (getIsHungry()==true) {
        cout<<"animal is hungry,feeding..."<<endl;
    }
    else {
        cout<<"animal is not hungry"<<endl;
    }
}

string Animal::getName() {
    return name;
}
int Animal::getAge() {
    return age;
}
bool Animal::getIsHungry()
{
   if (isHungry==true) {
       cout<<"Hungry"<<endl;
   }
    else  cout<<"Not Hungry"<<endl;
}
void Animal::setName(string n) {
    name = n ;
}
void Animal::setAge(int a) {
    age = a;
}
void Animal::setIsHungry(bool f) {
    isHungry = f;
}
// Mammal class

void Mammal::setFurColor(string fc) {
    furColor=fc;
}
string Mammal::getFurColor() {
    return furColor;
}

// Bird class
void Bird::setWingSpan(float ws) {
    wingSpan=ws;
}
float Bird::getWingSpan() {
    return wingSpan;

}

//Reptile class
void Reptile::setVenomous(bool v) {
    isVenomous=v;
}
bool Reptile::getVenomous() {
    if (isVenomous==true) {
        cout<<"Venomous"<<endl;
    }
    else  cout<<"Not Venomous"<<endl;
}
//Enclosure class
void Enclosure::setCapacity(int c) {
    capacity=c;
}
void Enclosure::setCurrentCount(int c) {
    currentCount=c;

}
Animal* Enclosure::getAnimal() {
    for (int i=0; i<getCurrentCount(),i++){
        cout<<animal[i].display() <<endl;
    }
}
int Enclosure::getCapacity() {
    return capacity;
}
int Enclosure::getCurrentCount() {
    return currentCount;
}
void Enclosure::setAnimal(Animal a) {
//animal=a;//pointer = pointer
    if (currentCount!=capacity) {
        animal[++currentCount]=a;
    }
}

//Visitor class
string Visitor::getVisitorName() {
    return visitorName;
}
int Visitor::getTicketsBought() {
  return ticketsBought;
}
void Visitor::displayInfo() {
    cout<<"visitor name is: "<<getVisitorName() <<endl;
   cout << "ticketsBought is: "<<getTicketsBought()<<endl;
}

//main method

int main() {
    Animal a;
    Enclosure *e1 = new Enclosure(5,10,&a);
    Mammal *m = new Mammal("Lion", 5, true, "yellow");
    Bird *b = new Bird("Parrot", 2, false, 10);
    Reptile *s = new Reptile("Snake", 3, true, true);
    Visitor *v = new Visitor("Sarah Ali", 3);
    cout<<"Enclosure 1 Animals: "<<endl;
    cout<<endl;
    cout<<m->getName()<<"(Age: "<<m->getAge()<<", "<<m->getIsHungry()<<endl;
    cout<<b->getName()<<"(Age: "<<b->getAge()<<", "<<b->getIsHungry()<<endl;
    cout<<s->getName()<<"(Age: "<<s->getAge()<<", "<<s->getVenomous()<<s->getIsHungry()<<endl;
    cout<<endl;
    cout<<"Visitor Info"<<endl;
    cout<<endl;
    cout<<"Name: "<<v->getVisitorName()<<endl;
    cout<<endl;
    cout<<"Tickets Bought: "<<v->getTicketsBought()<<endl;


};
