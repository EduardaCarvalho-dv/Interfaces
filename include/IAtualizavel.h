#pragma once

#include <iostream>
using namespace std;

class IAtualizavel {
public:
    virtual void atualizarFirmware() = 0;

    virtual ~IAtualizavel() {}
};