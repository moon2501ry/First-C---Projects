#include <iostream>

int main() {

    float valor;
    float desconto;
    float final;

    std::cout << "Valor do produto: ";
    std::cin >> valor;
    std::cout << "Denconto(em %): ";
    std::cin >> desconto;

    final = (desconto / 100) * valor;

    std::cout << "\nO valor final: " << final;
    if (final <= 0){
        char msg[50] = " ,e voce ta no prejuiso.";
        std::cout << msg;
    }
    std::cout << "\nDigite qualquer coisa para sair: ";
    std::cin >> valor;

    return 0;
}