#pragma once

#include <iostream>
using namespace std;

#include "IAtualizavel.h"
#include "IRelatavel.h"
#include "IControlavel.h"

class TermostatoDigital : public IAtualizavel, public IRelatavel, public IControlavel {
private:
    double temperatura;
    bool ligado;

public:
    TermostatoDigital();

    void atualizarFirmware() override;
    void desligar() override;
    void ligar() override;
    void gerarRelatorio() override;

    void monitoraTemperatura(); 
};