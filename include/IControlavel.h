#pragma once

#include <iostream>
using namespace std;

class IControlavel{
public:
    virtual void ligar() = 0;
    virtual void desligar() = 0;

    virtual ~IControlavel() {}

};