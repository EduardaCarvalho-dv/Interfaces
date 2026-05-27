#include "TermostatoDigital.h"

TermostatoDigital::TermostatoDigital() {

    temperatura = 26;
    ligado = false;

}

void TermostatoDigital::ligar() {

    ligado = true;
    cout << "Termostato ligado" << endl;
}

void TermostatoDigital::desligar() {

    ligado = false;
    cout << "Termostato desligado" << endl;
}

void TermostatoDigital::gerarRelatorio() {

    cout << "Temperatura atual: " << temperatura << " graus" << endl;
}

void TermostatoDigital::monitoraTemperatura() {

    if (!ligado) {

        cout << "Termostato desligado" << endl;

    } else {
        
        cout << "Monitorando temperatura: " << endl;

        while (temperatura > 25) {
            
            cout << "Temperatura: " << temperatura << endl;
            temperatura--;

        }

        cout << "Limite seguro de temperatura atingido" << endl;
    }

        
}