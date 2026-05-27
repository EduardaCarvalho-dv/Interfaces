#include "RoboAspirador.h"

RoboAspirador::RoboAspirador() {

    ligado = false;
    bateria = 100;
}

void RoboAspirador::ligar() {

    if (!ligado) {

        ligado = true;

        cout << "Robo aspirador ligado" << endl;
    } else {

        cout << "Robo aspirador ja ligado" << endl;
    }
}

void RoboAspirador::desligar() {

    if (ligado) {
        ligado = false;
        cout << "Robo aspirador desligado" << endl;
    } else {
        cout << "Robo aspirador ja desligado" << endl;
    }
}

void RoboAspirador::atualizarFirmware() {
    if (!ligado) {

        cout << "Erro: O robo aspirador esta desligado" << endl;

    } else {

        cout << "Atualizando firmware do robo aspirador" << endl;

        int progresso = 0;

        while (progresso <= 100) {

            cout << "Atualizacao: " << progresso << "%" << endl;

            progresso += 25;
        }

        cout << "Firmware atualizado" << endl;
    }
};

void RoboAspirador::limpar() {

    if (!ligado) {

        cout << "Erro: O robo esta desligado" << endl;
        return;
    }

    if (bateria <= 10) {

        cout << "Bateria muito baixa" << endl;
        return;
    }

    while (bateria > 10) {

        cout << "Limpando..." << endl;

        bateria -= 5;
        cout << "Bateria restante: " << bateria << "%" << endl;
    }

    cout << "Bateria baixa" << endl;
    cout << "Retornando para base de carregamento" << endl;
}