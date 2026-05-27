#include "LampadaInteligente.h"

LampadaInteligente::LampadaInteligente() {
    ligada = false;
}

void LampadaInteligente::ligar() {

    if (!ligada) {
        ligada = true;
        cout << "Lampada ligada" << endl;
    } else {
        cout << "Lampada ja ligada" << endl;
    }
}

void LampadaInteligente::desligar() {

    if (ligada) {
        ligada = false;
        cout << "Lampada desligada" << endl;
    } else {
        cout << "Lampada ja desligada" << endl;
    }
}

void LampadaInteligente::gerarRelatorio() {

    cout << "Relatorio da lampada: " << endl;

    if (ligada) {
        cout << "Status: Ligada" << endl;
    } else {
        cout << "Status: Desligada" << endl;
    }
}