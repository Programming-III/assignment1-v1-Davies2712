//
// Created by David on 12/11/2025.
//

#ifndef MILESTONE_1_VISITOR_H
#define MILESTONE_1_VISITOR_H
#include <iostream>
using namespace std;

class Visitor {
private:
    string visitorName;
    int ticketsBought;
public:
    Visitor(){};
    Visitor( string vn,int tb) {
        visitorName=vn;
        ticketsBought=tb;
    }
    ~Visitor(){};
    string getVisitorName();
    int getTicketsBought();
    void displayInfo();
};
#endif //MILESTONE_1_VISITOR_H
