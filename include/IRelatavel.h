#pragma once 

#include <iostream>
using namespace std;

class IRelatavel {
public:
    virtual void gerarRelatorio() = 0;

    virtual ~IRelatavel() {
        cout << "Destruindo relatavel..." << endl;
    }
};