#include <iostream>
using namespace std;

int main(){
    
    float valorPrimeiraNota; //Primeira nota ganha com peso de 30%
    float valorSegundaNota; //Segunda nota ganha com peso de 50%
    float valorTrabalho; //Nota ganha em um trabalho com peso de 20%
    float valorFinal;

    cout << "Digite o valor de sua primeira nota: ";
    cin >> valorPrimeiraNota;

    cout << "Digite o valor de sua segunda nota: ";
    cin >> valorSegundaNota;

    cout << "Digite o valor da nota do trabalho: ";
    cin >> valorTrabalho;

    valorFinal = ((valorPrimeiraNota * 3) + (valorSegundaNota * 5) + (valorTrabalho * 2)) / (3+5+2);
    
    cout << "Sua nota final sera " << valorFinal;
    if (valorFinal <= 4){
        cout << ", e voce esta reprovado!";
    } else if (valorFinal >= 5){
        cout << ", e voce esta aprovado!";
    }

    return 0;
}