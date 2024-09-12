#include <iostream>
#include <chrono>

#define l system("cls") // para Windows1

using namespace std;

// Função para realizar a soma
int soma(int num1, int num2) {
  return num1 + num2;
}

// Função para realizar a multiplicação
int multiplicacao(int num1, int num2) {
  return num1 * num2;
}

// Função para realizar a subtração
int subtracao(int num1, int num2) {
  return num1 - num2;
}

// Função para realizar a divisão
double divisao(int num1, int num2) {
  if (num2 == 0) {
    cerr << "Erro: não é possível dividir por zero!" << endl;
    return 0;
  }
  return static_cast<double>(num1) / num2;
}

int main() {
  char choice;
  bool exitProgram = false;

  while (!exitProgram) {
    l; // limpar a tela

    int escolha;
    int num1, num2;

    // Perguntar ao usuário quais números ele deseja operar
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    // Perguntar ao usuário qual operação ele deseja realizar
    cout << "Escolha a operação:" << endl;
    cout << "1 - Soma" << endl;
    cout << "2 - Multiplicação" << endl;
    cout << "3 - Subtração" << endl;
    cout << "4 - Divisão" << endl;
    cin >> escolha;

    l;
    // Realizar a operação escolhida e imprimir o resultado
    switch (escolha) {
      case 1:
        cout << "Resultado: " << soma(num1, num2) << endl;
        break;
      case 2:
        cout << "Resultado: " << multiplicacao(num1, num2) << endl;
        break;
      case 3:
        cout << "Resultado: " << subtracao(num1, num2) << endl;
        break;
      case 4:
        cout << "Resultado: " << divisao(num1, num2) << endl;
        break;
      default:
        cout << "Erro: escolha inválida!" << endl;
        cout << "Pressione qualquer tecla para fechar..." << endl;
    }

    cout << "Menu Principal:" << endl;
    cout << "1. Continuar" << endl;
    cout << "2. Sair" << endl;

    cout << "Digite sua escolha: ";
    cin >> choice;

    switch (choice) {
      case '1':
        // continuar
        break;
      case '2':
        cout << "Você tem certeza que deseja sair? (s/n): ";
        char response;
        cin >> response;

        if (response == 's' || response == 'S') {
          cout << "Pressione qualquer tecla para sair..." << endl;
          cin.get(); // aguardar usuário pressionar uma tecla
          exitProgram = true;
        } else {
          cout << "Voltando ao menu principal..." << endl;
          cin.get(); // aguardar usuário pressionar uma tecla
        }
        break;
      default:
        cout << "Escolha inválida. Pressione qualquer tecla para continuar..." << endl;
        cin.get(); // aguardar usuário pressionar uma tecla
    }
  }

  return 0;
}