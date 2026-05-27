#include "CameraSeguranca.h"

CameraSeguranca::CameraSeguranca() {
    ativada = false;
}

void CameraSeguranca::ligar() {

    if (!ativada) {
        ativada = true;
        cout << "Camera ativada" << endl;
    } else {
        cout << "Camera ja ativada" << endl;
    }
}

void CameraSeguranca::desligar() {

    if (ativada) {
        ativada = false;
        cout << "Camera desligada" << endl;
    } else {
        cout << "Camera ja desligada" << endl;
    }
}

void CameraSeguranca::gerarRelatorio() {

    cout << "Relatorio da camera: " << endl;

    if (ativada) {
        cout << "Status: Ativada" << endl;
    } else {
        cout << "Status: Desligada" << endl;
    }
}

void CameraSeguranca::atualizarFirmware() {

    cout << "Atualizando firmware da camera" << endl;

    int progresso = 0;

    while (progresso <= 100) {

        cout << "Atualizacao: " << progresso << "%" << endl;

        progresso += 25;
    }

    cout << "Firmware atualizado" << endl;
}