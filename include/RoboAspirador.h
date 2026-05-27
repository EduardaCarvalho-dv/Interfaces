#pragma once

#include <iostream>
using namespace std;

#include "IControlavel.h"
#include "IAtualizavel.h"

class RoboAspirador : public IControlavel, public IAtualizavel {
private:
    bool ligado;
    int bateria;

public:
    RoboAspirador(); 
    
    void ligar() override;
    void desligar() override;
    void atualizarFirmware() override;

    void limpar();
};
