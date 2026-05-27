#include "FechaduraInteligente.h"

FechaduraInteligente::FechaduraInteligente() {
    trancada = true;
}

void FechaduraInteligente::ligar() {

    if (trancada) {
        trancada = false;
        cout << "Fechadura destrancada" << endl;
    } else {
        cout << "Fechadura ja destrancada" << endl;
    }
}

void FechaduraInteligente::desligar() {

    if (!trancada) {
        trancada = true;
        cout << "Fechadura trancada" << endl;
    } else {
        cout << "Fechadura ja trancada" << endl;
    }
}

void FechaduraInteligente::atualizarFirmware() {

    if (trancada) {

        cout << "Erro: A fechadura esta travada" << endl;

    } else {

        cout << "Atualizando firmware da fechadura" << endl;

        int progresso = 0;

        while (progresso <= 100) {

            cout << "Atualizacao: " << progresso << "%" << endl;

            progresso += 25;
        }

        cout << "Firmware atualizado" << endl;
    }
}

void FechaduraInteligente::gerarRelatorio() {

    cout << "Relatorio da fechadura" << endl;

    if (trancada) {

        cout << "Status: Travada" << endl;
    } else {

        cout << "Status: Destravada" << endl;
    }
}