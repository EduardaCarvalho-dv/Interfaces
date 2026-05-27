#pragma once

#include <iostream>
using namespace std;

#include "IControlavel.h"
#include "IAtualizavel.h"
#include "IRelatavel.h"

class FechaduraInteligente : public IControlavel, public IAtualizavel, public IRelatavel {
private:
    bool trancada;

public:
    FechaduraInteligente();

    void ligar() override;
    void desligar() override;
    void atualizarFirmware() override;
    void gerarRelatorio() override;

};
