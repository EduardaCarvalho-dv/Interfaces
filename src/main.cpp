#include <iostream>
using namespace std;

#include "LampadaInteligente.h"
#include "CameraSeguranca.h"
#include "FechaduraInteligente.h"
#include "TermostatoDigital.h"
#include "RoboAspirador.h"

int main () {

    LampadaInteligente lampada;
    CameraSeguranca camera;
    FechaduraInteligente fechadura;
    TermostatoDigital termostato;
    RoboAspirador robo;

    int opcao;

    while (true) {

        cout << endl;
        cout << "Interface Dispositivos Inteligentes: " << endl;

        cout << "\n1 - Lampada Inteligente" << endl;
        cout << "2 - Camera de Seguranca" << endl;
        cout << "3 - Fechadura Inteligente" << endl;
        cout << "4 - Termostato Digital" << endl;
        cout << "5 - Robo Aspirador" << endl;
        cout << "0 - Sair" << endl;

        cout << "\nOpcao: ";
        cin >> opcao;

        switch (opcao) {

            case 1: {

                int escolha;

                cout << endl;
                cout << "Lampada Inteligente: " << endl;

                cout << "\n1 - Ligar" << endl;
                cout << "2 - Desligar" << endl;
                cout << "3 - Gerar Relatorio" << endl;

                cout << "\nOpcao: ";
                cin >> escolha;

                switch (escolha) {

                    case 1:
                        lampada.ligar();
                        break;

                    case 2:
                        lampada.desligar();
                        break;

                    case 3:
                        lampada.gerarRelatorio();
                        break;

                    default:
                        cout << "\nOpcao invalida" << endl;
                }

                break;
            }

            case 2: {

                int escolha;

                cout << endl;
                cout << "Camera de Seguranca: " << endl;

                cout << "\n1 - Ligar" << endl;
                cout << "2 - Desligar" << endl;
                cout << "3 - Gerar Relatorio" << endl;
                cout << "4 - Atualizar Firmware" << endl;

                cout << "\nOpcao: ";
                cin >> escolha;

                switch (escolha) {

                    case 1:
                        camera.ligar();
                        break;

                    case 2:
                        camera.desligar();
                        break;

                    case 3:
                        camera.gerarRelatorio();
                        break;

                    case 4:
                        camera.atualizarFirmware();
                        break;

                    default:
                        cout << "\nOpcao invalida" << endl;
                }

                break;
            }

            case 3: {

                int escolha;

                cout << endl;
                cout << "Fechadura inteligente: " << endl;

                cout << "\n1 - Ligar" << endl;
                cout << "2 - Desligar" << endl;
                cout << "3 - Gerar Relatorio" << endl;
                cout << "4 - Atualizar Firmware" << endl;

                cout << "\nOpcao: ";
                cin >> escolha;

                switch (escolha) {

                    case 1:
                        fechadura.ligar();
                        break;

                    case 2:
                        fechadura.desligar();
                        break;

                    case 3:
                        fechadura.gerarRelatorio();
                        break;

                    case 4:
                        fechadura.atualizarFirmware();
                        break;

                    default:
                        cout << "\nOpcao invalida" << endl;
                }

                break;
            }

            case 4: {

                int escolha;

                cout << endl;
                cout << "Termostato Digital: " << endl;

                cout << "\n1 - Ligar" << endl;
                cout << "2 - Desligar" << endl;
                cout << "3 - Gerar Relatorio" << endl;
                cout << "4 - Atualizar Firmware" << endl;
                cout << "5 - Monitorar Temperatura" << endl;

                cout << "\nOpcao: ";
                cin >> escolha;

                switch (escolha) {

                    case 1:
                        termostato.ligar();
                        break;

                    case 2:
                        termostato.desligar();
                        break;

                    case 3:
                        termostato.gerarRelatorio();
                        break;

                    case 4:
                        termostato.atualizarFirmware();
                        break;

                    case 5:
                        termostato.monitoraTemperatura();
                        break;

                    default:
                        cout << "\nOpcao invalida" << endl;
                }

                break;
            }

            case 5: {

                int escolha;

                cout << endl;
                cout << "Robo Aspirador: " << endl;

                cout << "\n1 - Ligar" << endl;
                cout << "2 - Desligar" << endl;
                cout << "3 - Atualizar Firmware" << endl;
                cout << "4 - Limpar Casa" << endl;

                cout << "\nOpcao: ";
                cin >> escolha;

                switch (escolha) {

                    case 1:
                        robo.ligar();
                        break;

                    case 2:
                        robo.desligar();
                        break;

                    case 3:
                        robo.atualizarFirmware();
                        break;

                    case 4:
                        robo.limpar();
                        break;

                    default:
                        cout << "\nOpcao invalida" << endl;
                }

                break;
            }

            case 0:
                cout << "\nEncerrando" << endl;
                return 0;

            default:
                cout << "\nOpcao invalida" << endl;
        }
    }

    return 0;
};