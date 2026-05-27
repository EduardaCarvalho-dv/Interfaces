#pragma once

#include <iostream>
using namespace std;

#include "IControlavel.h"
#include "IRelatavel.h"

class LampadaInteligente : public IControlavel, public IRelatavel {
private:
    bool ligada;

public:
    LampadaInteligente();

    void ligar() override;
    void desligar() override;
    void gerarRelatorio() override;
};