#pragma once

#include <iostream>
using namespace std;

#include "IControlavel.h"
#include "IRelatavel.h"
#include "IAtualizavel.h"

class CameraSeguranca : public IControlavel, public IRelatavel, public IAtualizavel {
private:
    bool ativada;

public:
    CameraSeguranca() {}

    void ligar() override;
    void desligar() override;
    void gerarRelatorio() override;
    void atualizarFirmware() override;
};