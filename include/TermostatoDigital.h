#pragma once

#include <iostream>
using namespace std;

#include "IAtualizavel.h"

class TermostatoDigital : public IAtualizavel {
private:
    double temperatura;

public:
    TermostatoDigital() {}

    void atualizarFirmware() override;

    void monitoraTemperatura(); 
};