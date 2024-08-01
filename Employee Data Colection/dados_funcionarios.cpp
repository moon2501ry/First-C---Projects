#include <iostream>

int main() {

    char name[50];
    int years;
    char sexo[50];
    char proficao[50];
    float salario;

    std::cout << "Digite seus dados:\n";

    std::cout << "Nome: ";
    std::cin >> name;

    std::cout << "Idade: ";
    std::cin >> years;

    std::cout << "Sexo: ";
    std::cin >> sexo;

    std::cout << "Proficao: ";
    std::cin >> proficao;

    std::cout << "Salario: ";
    std::cin >> salario;

    std::cout << "\nOi " << name << " , seus dados estarao abaixo:\n";
    std::cout << "Idade: " << years << " anos.\n";
    std::cout << "Sexo: " << sexo << ".\n";
    std::cout << "Proficao: " << proficao << ".\n";
    std::cout << "Salario: " << salario << ".\n";
    
    return 0;
}